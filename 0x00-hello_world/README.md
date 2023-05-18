![hello-world](https://www.elegantthemes.com/blog/wp-content/uploads/2020/08/hello-world.png 'hello-world')

# 0x00. C - Hello, World

## C compilation process
- Preprocessing
```
ignores comments, replaces preprocessor directives (#) expands macros and includes the header files

```
- Compiling
```
the output passed on from the preprocessor is then used to generate machine code
or assembly code with a .s extension

```
- Assembly
```
the assembly code is then converted to object code (similar to binary code)
with the .o extension  

```
- Linking
```
the final stage where all the object/machine code generated
from source code is linked and compressed into an executable file 
a.out or .exe in Windows

```

## writing simple C programs
- using `printf, putchar` and `puts`
- understanding the `main` - a primary function for every 
C program that serves as a starting point for program execution 

## Betty Linter
- C code checker written in _perl_ inspired by the Linux Kernel coding style
