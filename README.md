
# get_next_char()

> getchar will be implemented until morale improves.

No more implementing the same thing again and again just so you can grab the next character skipping whitespaces, tabs and newlines.

Simply call get_next_char() whenever you need a character, and it takes care of trimming spaces, newlines, and tabs automatically.

### Use case

Are you tired of implementing I/O operations each time you write a I/O related C program?

Fret no more my friend. 

With our function get_next_char() you do not have to re-implement it again and again.

### Returns 

Returns a character in char format excluding whitespace, tabs and newline.

### Installation

This project can be built using CMake. If you clone `get_next_char` into your
project's root directory, you can use:

```cmake
add_subdirectory(get_next_char)
```

You can also install `get_next_char`. Go to this projects and root and run the following.
You can set the install path of the library, or leave it default in which case `get_next_char`
will be installed into the default `CMAKE_INSTALL_PREFIX`.

```bash
mkdir build
# if you want a shared library, add '-DBUILD_SHARED_LIBS=ON'
cmake -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=./install
cmake --build build
cmake --install build
```

Now in your project's CMakeLists.txt put:

```cmake
find_package(getnextchar 0.1.0 REQUIRED)

add_executable(your_app_name main.c)
target_link_libraries(your_app_name PRIVATE getnextchar::getnextchar)
```

# License Agreement

This codebase uses the `CC BY-NC-SA 4.0` License.
