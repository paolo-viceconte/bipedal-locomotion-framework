# bipedal-locomotion-framework <a href="https://isocpp.org"><img src="https://img.shields.io/badge/standard-C++17-blue.svg?style=flat&logo=c%2B%2B" alt="C++ Standard" /></a>  </a><a href="./LICENSE"><img src="https://img.shields.io/badge/license-LGPL-19c2d8.svg" alt="Size" /></a>

The **BipedalLocomotionFramework** project is a _suite_ of libraries for achieving bipedal locomotion on humanoid robots.


# Overview
- [:orange_book: Exported components](#orange_book-exported-components)
- [:page_facing_up: Dependencies](#page_facing_up-dependencies)
- [:hammer: Build the suite](#hammer-build-the-suite)
- [:running: How to use the libraries](#running-how-to-use-the-libraries)
- [:books: Doxigen documentation](#books-doxigen-documentation)

# :orange_book: Exported components
- **BipedalLocomotion::Framework**: It is an _interface_ library that gathers all
  the exported components, includable with the file ``BipedalLocomotion/Framework.h``.
- [**GenericContainer**](./src/GenericContainer): Utilities library which include a data structure similar to ``span`` but resizable. It can be used to "map" vector-type data structures.
- [**YarpUtilities**](./src/YarpUtilities): Utilities library for retrieving
  data and from YARP structures
- [**ParametersHandler**](./src/ParametersHandler): Library for
  retrieving parameters from configuration files and not only
- [**Estimators**](./src/Estimators): Library containing observers


# :page_facing_up: Dependencies
The **BipedalLocomotionFramework** project is versatile and it can be used
to compile only some components. Each component has its own dependencies that
can be found in [`BipedalLocomotionFrameworkFindDependencies.cmake`](./cmake/BipedalLocomotionFrameworkFindDependencies.cmake)
file. Please note that the indicated version is the the minimum required version.

- `YarpUtilities` requires:
    - For using it:
      - [`iDynTree`](https://github.com/robotology/idyntree) (version 0.11.105)
      - [`YARP`](https://github.com/robotology/YARP)
    - For testing:
      - [`Catch2`](https://github.com/catchorg/Catch2)

- `ParametersHandler` requires:
    - For compiling the `YARP` specialization of the `ParametersHandler`:
      - [`YARP`](https://github.com/robotology/YARP)
    - For testing:
      - [`Catch2`](https://github.com/catchorg/Catch2)

- `Estimators` requires:
    - For using it:
      - [`iDynTree`](https://github.com/robotology/idyntree) (version 0.11.105)
      - [`ParametersHandler`](./src/ParametersHandler)
    - For testing:
      - [`Catch2`](https://github.com/catchorg/Catch2)
      - [`YARP`](https://github.com/robotology/YARP)

# :hammer: Build the suite
## Linux/macOs

```sh
git clone https://github.com/dic-iit/bipedal-locomotion-framework.git
cd bipedal-locomotion-framework
mkdir build && cd build
cmake ../
make
[sudo] make install
```
Notice: `sudo` is not necessary if you specify the `CMAKE_INSTALL_PREFIX`. In this case it is necessary to add in the `.bashrc` or `.bash_profile` the following lines:
```sh
export BipedalLocomotionFramework_INSTALL_DIR=/path/where/you/installed/
```
# :running: How to use the libraries
bipedal-locomotion-framework provides native CMake support which allows the library to be easily used in CMake projects.

bipedal-locomotion-framework exports the `CMake` targets presented in [Exported components](#orange_book-exported-components) section. The targets can be imported using the `find_package` CMake command and used by calling `target_link_libraries`.

# :books: Doxigen documentation
[Here](https://dic-iit.github.io/bipedal-locomotion-framework) you can find the documentation.
