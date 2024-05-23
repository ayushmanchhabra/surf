# Copyright (c) The Surf Authors

.PHONY: clean help target test

TARGET_DIR := $(shell pwd)
TARGET_EXE := ./out/surf

GN_DIR := third_party/gn
GN_EXE := $(TARGET_DIR)/$(GN_DIR)/out/gn

NINJA_DIR := third_party/ninja
NINJA_EXE := $(TARGET_DIR)/$(NINJA_DIR)/ninja

debug: $(TARGET_EXE) ## Compile debug build

clean: ## Remove built artifacts
	rm	-rf	./out

lint:
	clang-format -i **/*.cc **/*.h

test: $(TARGET_EXE) ##	Run	tests
	python -m pytest ./tests/*.py
	
$(TARGET_EXE): $(GN_EXE)
	$(GN_EXE) gen out
	$(NINJA_EXE) -C	out

$(GN_EXE): $(NINJA_EXE)
	cd $(GN_DIR) && python build/gen.py && $(NINJA_EXE) -C out

$(NINJA_EXE):
	cd	$(NINJA_DIR) && ./configure.py --bootstrap
