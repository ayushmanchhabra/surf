# surf

A browser with the goal of inversion of control.

> This software is in development and no security gaurantees can be provided at this time. Please run this in a virtual machine.

## Build

1. Clone repo: `git clone --recurse-submodules https://github.com/ayushmanchhabra/surf.git`
1. `cd` into the project directory
1. Run build: `make`
1. Execute binary: `./out/surf`

## Components

- Chrome
- Render
- Service
- Utility

## Dependencies

Note: development dependencies include production dependencies.

### Developement

- C
- C++
- Clang
- Clang Format
- Clang Tidy
- Git
- GN
- GN Language Server
- LLVM
- Make
- Ninja
- Python

### Production

- cURL

## Sprint 1

- [x] Get HTTP response via cURL
- [ ] Parse HTML into a Tree data structure
- [ ] Render TEXT using Cairo
- [ ] Display as GUI via X Server
 