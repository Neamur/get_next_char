# Example

This example shows how you can use `get_next_char`. The example prints characters
back out using `get_next_char`'s feature of skipping whitespace.

```bash
# first compile and install `get_next_char`
cmake -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=./install
cmake --build build
cmake --install build

# now build the example
cd example
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build

# Now running
./build/skip
```
