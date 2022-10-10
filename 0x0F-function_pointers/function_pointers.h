#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int, int (*)(int));

#endif
