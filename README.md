<p align="center">
      <img src="https://i.ibb.co/vdydkBk/cpp-img.jpg" alt="cpp_template_project" width="300">
</p>

<p align="center">
    <img src="https://img.shields.io/appveyor/build/gruntjs/grunt" alt="build">
    <img src="https://img.shields.io/badge/coverage-90-green" alt="Test coverage">
    <img src="https://img.shields.io/badge/Version-0.1-blue" alt="Version">
    <img src="https://img.shields.io/badge/License-GPL--3.0-orange" alt="License">
</p>

---

## About

You have to write a lot of code, but you don't want to waste your time creating the same thing every time. Then this cpp template for you.

---

## Requirements
* C++ version: [`C++17`](https://en.cppreference.com/w/cpp/17)
* Build system: [`CMake`](https://cmake.org/)
* C++ compiler: `g++`
* Code coverage report: [`lcov`](http://ltp.sourceforge.net/coverage/lcov.php)
* Test framework: [`gtest`](https://github.com/google/googletest)

---

## Guide

0. To create your own class use script: 
- `./scripts/class.sh ClassName ./path` 
<br> then don't forget to add to CMakelists, e.g.: 
- `include(${CMAKE_CURRENT_LIST_DIR}/class_name/class_name.cmake)`
- `add_executable(... ${CLASS_NAME} ...)`
1. To build project run script: `./scripts/build.sh`
2. To run tests use script: `./scripts/test.sh`
3. To find out a code coverage you need to do the second step. Open html file to see details: `build_tests/out/index.html`

---

## Developers

- [Renat](https://github.com/khatymov)

---

## License
Current project is distributed under the GPL-3.0 license