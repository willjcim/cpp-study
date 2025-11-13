# notes for 0.1-0.13


## 0.5
`.cpp` -> `.o` is 1 to 1

linker combines all `.o` files into a binary

> If the linker is unable to connect a reference to something with its definition, you’ll get a linker error, and the linking process will abort.

linker will connect `.cpp` files that reference each other - cross file dependencies 


https://code.visualstudio.com/docs/cpp/config-mingw 

## 0.7
manual run: `g++ -std=c++20 <filename>.cpp -o <binaryname>`

## 0.8 - troubleshooting 
https://www.learncpp.com/cpp-tutorial/a-few-common-cpp-problems/

## 0.9 - compiler build configs
add -ggdb to the command line for debug builds and -O2 -DNDEBUG for release builds

## 0.10 - compiler extensions
disable compiler extensions by adding the `-pedantic-errors` flag to the compile command line

## 0.11 - warning and error levels 
for more warning verbosity: `-Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion`

## 0.12 - language standards
`-std=c++11`, `-std=c++14`, `-std=c++17`, `-std=c++20`, or `-std=c++23` flags