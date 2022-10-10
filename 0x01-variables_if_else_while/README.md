# If, Else, While on C

This is the second task on ALX low level programming, this task exposed me to basic syntax on C, use of comments, Data types| integer types, Declerations, Characters, Arithmetic Operators, Variables assignments, Comparisons, Logical operators, if, if...else, while loops, do...while loops, for loops among others.

## Learning Objectives
At the end of this task, I was able to learn:
- Types of arithmetic, logical and relational operators and how to use them
- ASCII character sets
- purpose of gcc flags -m32 and -m64
- variable types example : sign and unsisigned int long, double, float, long long.

## Tasks
### 0. [Positive anything is better than negative nothing](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/0-positive_or_negative.c)
#### Descriptions
This program will assign a random number to the variable n each time it is executed. Check if the number stored in the variable n is positive or negative.
##### Expected output
The output of the program should be:
- The number, followed by
  - if the number is greater than 0; **is positive**
  - if the number is 0; **is zero**
  - if the number is less than 0; is negative
- followed by a new line
##### Code to compile it
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
```

### 1.[The last digit](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/1-last_digit.c)
#### Descriptions
This program will assign a random number to the variabe n each time it is executed. output the string, determine the last digit of the random number generated
##### Expected output
The output of the program should be:
- The string **Last digit of**, followed by
- **n**, followed by
- the string **is**, followed by
  - if the last digit of **n** is greater than 5: the string **and is greater than 5**
  - if the last digit **n** is 0: the string **and is 0**
  - if the last digit of **N** is less than 6 and not 0; the string **and is less than 6 and not 0**
- followed by a new line
##### Code to compile it
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
```

### 2. [Alphabet in lowerCase](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/2-print_alphabet.c)
#### Descriptions
write a program that prints the alphabet in lowercase, followed by a new line.
- You can only use the **putchar** function(every other function(printf, puts, etc...) is forbidden)
- All codes must be in the main function as no sub functions are allowed
- **putchar** can only be used twice in the code
##### Code to compile it
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
```
##### Sample output
```
$ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz
```

### 3. [alphABET](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/3-print_alphabets.c)
#### Descriptions
write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
- You can only use the **putchar** function(every other function(printf, puts, etc...) is forbidden)
- All codes must be in the main function as no sub functions are allowed
- **putchar** can only be used three times in the code

### 4. [alpha exluding q and e](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/4-print_alphabt.c)
#### Descriptions
Write a program that prints the alphabet in lowercase, using only **putchar** function not more than twice in the code, followed by a new line, excluding the letters **q** and **e**

### 5. [Digit number of Base 10](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/5-print_numbers.c)
#### Descriptions 
write a program that print all single digit numbers of base 10 starting from 0, followed by a newline.
#### Constraint
- You are not allowed to use any variable of type **char**
- You can only use the **putchar** function
- You can only use **putchar** twice in the code
- all the code should be in the main function

### 6. [Numberz](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/6-print_numberz.c)
#### Descriptions
Same as task 5, only this time, only **putchar** function is allowed

### 7. [Lowercase alphabet reversed](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/7-print_tebahpla.c)
#### Descriptions
write a code that prints the lowercase alphaabet in reverse, followed by a new line using the **putchar** function

### 8. [Hexdecimal](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/8-print_base16.c)
#### Descriptions
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line

### 9. [Single digit number](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/9-print_comb.c)

### 10. [2 digits combinations](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/100-print_comb3.c)
#### Descriptions
Write a program that prints all the possible different combinations of two digits number.
- Numbers must be seperated by **,**, followed by a space
- The two digits must be different. note: **01** and **10** are considered the same combination of the two digits **0** and **1**
- print only the smallest combination of the two digits
- Numbers should be printed in ascending order, with two digits.
- you are not allowed to use any variable of type char
- You can only use **putchar** and not more than five times
#### Expected output
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
```

### 11. [3 digits combinations](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/101-print_comb4.c)
#### Descriptions
Write a program like task 10 above, that prints all possible different combinations of three digits. note: all the rules of task 10 also applies here.
#### Expected output
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
```

### 12. [two two-digit numbers](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/102-print_comb5.c)
#### Descriptions
Write a program that prints all possible combinations of two two-digits numbers.
- The numbers should range from **0** to **99**
- The two numbers should be seperated by a space 
- All numbers should be printed with two digits. **1** should be printed as **01**
- The combination of numbers must be seperated by comma, followed by a space
- The combinations of numbers should be printed in ascending order
- **00 01** and **01 00** are considered as the same combination of the numbers **0** and **1**
- all other instructions as seen in tasks 10 also holds
#### Expected output
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```
