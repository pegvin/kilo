# kilo
A Text Editor Made Using ["Make Your Own Text Editor"](https://viewsourcecode.org/snaptoken/kilo/) Tutorial.

---
## Languages Supported
More Coming Soon!
- [x] C
- [x] C++
- [x] Python
- [x] JavaScript
- [ ] Rust

---
## Todo
- [ ] Undo-Redo
- [ ] Ctrl Arrow Movement Support
- [ ] UTF-8 Support
- [ ] Windows Support (Not Sure)

---
## Building From Source
#### Linux
Make Sure you have `git`, `make` & `clang` (or gcc, but you will need to change the compiler in makefile) Installed.
1. Clone The Repository: `git clone https://github.com/pegvin/kilo`
2. Move Into The Repo Directory: `cd kilo`
3. Compile: `make` (or use `make release` for a optimized production build)

#### Windows
Unfortunately Kilo Uses `termios.h` header library for interacting with terminal I/O, & this library isn't available on Windows, If anyone can add support for windows, it would be appreciated.

# Thanks
