# C-Hello_World

This is the first task on ALX LOW Level Programming, this tasks emphasizes C programming language, it's basic syntax and main function.

## Learning Objectives
At the end of this task, I was able to learn :
- What is *int main()*
- How to print text using *printf*, *puts* and *putchar*
- How to get the size of a specific type using the unary operator *sizeof*
- How to compile using *gcc*
- How to find the right header to include in your source code when using a standard library function
- How the main function influence the return value of the program
- How to format and write readable code using [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Tasks
### 0. [Preprocessor](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x00-hello_world/0-preprocessor)
#### Descriptions
Write a script that runs a C file through the preprocessor and save the result into another file
- The C file name will be saved in the variable **$CFILE**
- The output should be saved in the file **c**

### 1. [1-compiler](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x00-hello_world/1-compiler)
#### Descriptions
Write a script that compiles a C file but does not link
- The C file name will be saved in the variable **$CFILE**
- The output file should be named the same as the C file, but with the extension **.o** instead of **.c**
  - Example: if the C file is **main.c**, the output file should be **main.o**

### 2. [assembler](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x00-hello_world/2-assembler)
#### Descriptions
Write a script that generates the assembly code of a C code and save it in an output file.
- The C file name will be saved in the variable **$CFILE**
- The output file should be named the same as the C file, but with the extension **.s** instead of **.c**.
  - Example: if the C file is **main.c**, the output file should be **main.s**

### 3. [name](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x00-hello_world/3-name)
#### Descriptions
Write a script that compiles a C file and creates an executable named **cisfun**
- The C file name will be saved in the variable **$CFILE**

### 4. [Hello, puts](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x00-hello_world/4-puts.c)
#### Descriptions
- Write a C program that prints exactly _"Programming is like building a multilingual puzzle"_, followed by a new line.
- Use the function **puts**
- you are not allowed to use **printf**
- The program should end with the value **0**.

### 5. [Hello, printf](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x00-hello_world/5-printf.c)
#### Descriptions
Write a C program that prints exactly _with proper grammar, but the outcome is a piece of art,_, followed by a new line.
- Use the function **printf**
- You are not allowed to use the function **puts**
- The program should return **0**
- The program should compile without warning when using the **-wall gcc** option

### 6. [Size is not grandeur, and territory does not make a nation](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x00-hello_world/6-size.c)
#### Descriptions
Write a C program that prints the size of various types on the computer it is compiled and run on.
- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return 0
- You might have to install the package **libc6-dev-i386** from the command line using 

    ```
    sudo apt-get update
    ```

    after updating apt database we can now install libc6-dev-i386 by running the following command 

    ```
    sudo apt-get -y install libc6-dev-i386
    ``` 

    on your Linux to test the **-m32 gcc** option

#### Output Sample on 64-bit
```
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```
#### Output Sample on 32-bit
```
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```

### 7. [Intel](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x00-hello_world/100-intel)
#### Descriptions
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
- The C file name will be saved in the variable **$CFILE**.
- THe output file should be named the same as the C file, with the extension **.s** instead of **.c**
  - Example: if the C file is **main.c**, the output file should be **main.s**

### 8. [UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity ](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x00-hello_world/101-quote.c)
#### Descriptions
Write a C program that prints exactly _and that piece of art is useful" - Dora Korpar, 2015-10-19_, followed by a new line, to the standard error.
- You are not allowed to use any functions listed in the NAME section of the man (3) **printf** or man (3) **puts**
- The program should return 1
- The program should compile without any warnings whe using the **-wall gcc** option
