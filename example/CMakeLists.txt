cmake_minimum_required(VERSION 3.14)

project(skip)

set(CMAKE_C_STANDARD 99)

add_executable(skip main.c)

# For this example, `get_next_char` is installed to the local directory.
# This line isn't necessary if you installed `get_next_char` somewhere cmake can
# find it by default.
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../install")

find_package(getnextchar 0.1.0 REQUIRED)
target_link_libraries(skip PRIVATE getnextchar::getnextchar)


