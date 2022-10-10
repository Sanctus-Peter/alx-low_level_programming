# C-Debugging

This is the fourth ALX low level programming course, it seeks to educate on the act of detecting bugs in code, and eventually debugging it maunally without the use of debugging tools like **gdb** or any built in tools that the IDEs have, it's a rigorous process of understanding the concepts and process of debugging manually.

## Resources
- [Debugging](https://en.wikipedia.org/wiki/Debugging)
- [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)

## Tasks
### 1. [Multiple mains](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x03-debugging/0-main.c)
#### Descriptions
In this task, you are provided with a main.h file
```C
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
```
write a program to test [positive_or_negative prototype](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x01-variables_if_else_while/0-positive_or_negative.c) created in task 2 [variables, if, else while](https://github.com/Sanctus-Peter/alx-low_level_programming/tree/main/0x01-variables_if_else_while).

### 2. [Infinite loop](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x03-debugging/1-main.c)
#### Descriptions
Copy the main file below. Comment out(don't delete it!) the part of the code that is causing the output to go into an infinite loop. Dont add or remove any line of code, as we (ALX) will be checking your line count. You are only allowed to comment out existing code.
#### main.c
```C
#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

 int main(void)
 {
 	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinte loop avoided! \\o/\n");

	return (0);
 }
```

### 3. [largest of 3 integers](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x03-debugging/2-largest_number.c)
#### Descriptions
The program below is supposed to print the largest of 3 numbers, but it doesn't, find and fix the bug.
```C
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
```
#### [Updated header file](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x03-debugging/main.h)

### 4. [Leap year](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x03-debugging/3-print_remaining_days.c)
#### Descriptions
This program converts a date to the day of the year and determines how many days are left in the year, taking leap year into consideration.The below code workwell for **04/01/1997** but fails if date is **02/29/2000** find and fix the bug.
```C
#include "main.h"
#include <stdio.h>

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
```
