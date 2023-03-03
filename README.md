# c_plugin

## Getting started

An example for a C (C99) plugin system. It can load/unload plugins at runtime and call functions from them.

### Prerequisites

- [Make](https://www.gnu.org/software/make/)
- [GCC](https://gcc.gnu.org/)
- [Linux](https://www.linux.org/) (or [WSL](https://docs.microsoft.com/en-us/windows/wsl/install-win10) on Windows).

## Building

To build the project:

```bash
make
```

To build and test the project:

```bash
make test
```

## Usage

To run the project and load the plugin1:
__Note:__ You can change the plugin name to load another plugin (*plugin2*).

```bash
./main plugin1
```

## Contributing

If you want to contribute to this project, you can do it by opening a pull request or an issue.

## Open source projects used

- [Make](https://www.gnu.org/software/make/)
- [gcc](https://github.com/gcc-mirror/gcc)
- [actions](https://github.com/actions/virtual-environments)

## Sources and references

- [linux-dlopen-system-call-c](https://linuxhint.com/linux-dlopen-system-call-c/)
- [dlopen_sample.c](https://gist.github.com/tailriver/30bf0c943325330b7b6a)
- [alternatives-to-dlsym-and-dlopen-in-c](https://stackoverflow.com/questions/1067346/alternatives-to-dlsym-and-dlopen-in-c)
- [sample-cpp-plugin](https://github.com/caiorss/sample-cpp-plugin/blob/master/main.cpp)
- [how-much-overhead-can-the-fpic-flag-add](https://stackoverflow.com/questions/15861759/how-much-overhead-can-the-fpic-flag-add)

## Licensing

See the [LICENSE](LICENSE) document.
