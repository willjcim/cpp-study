# notes for 0.1-0.13


## 0.5
`.cpp` -> `.o` is 1 to 1

linker combines all `.o` files into a binary

> If the linker is unable to connect a reference to something with its definition, you’ll get a linker error, and the linking process will abort.

linker will connect `.cpp` files that reference each other - cross file dependencies 


https://code.visualstudio.com/docs/cpp/config-mingw 

## 0.7
manual run: `g++ -std=c++20 <filename>.cpp -o <binaryname>`

