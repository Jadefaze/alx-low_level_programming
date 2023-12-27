#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

void *_memset(char *s, char c, size_t n);
unsigned int _str_len(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);

#endif /* MAIN_H */
