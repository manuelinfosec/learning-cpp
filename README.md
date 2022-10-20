# learning-cpp

This repository containing the source files I used while learning to code in C++ few years ago; pushed to remote to grant my machine some free space.

## Compilation
Although the compiled files are provided in the [bin](https://github.com/manuelinfosec/learning-cpp/tree/main/bin) folder (.exe only), the source files can be compiled with `MinGW-w64 10.0.0` with the following command:

```
g++ -std=c++20 -o ${file_out.exe} -I ./folder_name *.cpp folder_name/*.cpp
```
**Note:** C++ 20 is required to compile some of the source files.

## Acknowledgments
If you found this helpful, leave this repository a star.