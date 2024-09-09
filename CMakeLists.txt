cmake_minimum_required(VERSION 3.24...3.26)
project(demo)

find_package(Python COMPONENTS Interpreter Development.Module REQUIRED)
python_add_library(_demo MODULE WITH_SOABI
    src/demo/_demo/_demo.c
)

install(TARGETS _demo LIBRARY DESTINATION demo)
