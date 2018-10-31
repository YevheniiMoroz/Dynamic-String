#ifndef LAB2_MY_STR_T_H
#define LAB2_MY_STR_T_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct
{
    size_t capacity_m;
    size_t size_m;
    char*  data;
} my_str_t;

int my_str_reserve(my_str_t* str, size_t buf_size);
int my_str_create(my_str_t* str, size_t buf_size);
int my_str_from_cstr(my_str_t* str, const char* cstr, size_t buf_size);
int my_str_print(const my_str_t* str);
void my_str_free(my_str_t* str);
size_t my_str_size(const my_str_t* str);
size_t my_str_capacity(const my_str_t* str);
int my_str_empty(const my_str_t* str);
int my_str_getc(const my_str_t* str, size_t index);
int my_str_putc(my_str_t* str, size_t index, char c);
int my_str_pushback(my_str_t* str, char c);
int my_str_popback(my_str_t* str);
int my_str_copy(const my_str_t* from,  my_str_t* to, int reserve);
void my_str_clear(my_str_t* str);
int my_str_insert_c(my_str_t* str, char c, size_t pos);
int my_str_insert(my_str_t* str, const my_str_t* from, size_t pos);
int my_str_insert_cstr(my_str_t* str, const char* from, size_t pos);
int my_str_append(my_str_t* str, const my_str_t* from);
int my_str_append_cstr(my_str_t* str, const char* from);
int my_str_cmp(my_str_t* str, const char* from);
int my_str_substr(const my_str_t* str, my_str_t* to, size_t beg, size_t end);
const char* my_str_get_cstr(my_str_t* str);
size_t my_str_find(const my_str_t* str, const my_str_t* tofind, size_t from);
size_t my_str_find_c(const my_str_t* str, char tofind, size_t from);
size_t my_str_find_if(const my_str_t* str, int (*predicat)(char));
int my_str_read_file_until_end(my_str_t* str, FILE* file);
int my_str_read_file_until_blankspace(my_str_t* str, FILE* file);
int my_str_remove_c(my_str_t* str, size_t pos);
int my_str_read(my_str_t* str);
#endif //LAB2_MY_STR_T_H
