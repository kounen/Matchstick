/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** MY_LIBRARY
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdarg.h>
#include <limits.h>

char *print_pointer(long long index);
int unit_size(int nb);
char *hexa_nbr_x(long long nb);
char *hexa_capital(int nb);
int switch_letter_two(char *str, int i, va_list list);
int switch_letter_one(char *str, int i, va_list list);
int switch_letter_three(char *str, int i, va_list list);
int octal_nbr(int nb);
void integer_nbr(unsigned int nb);
char *my_strcpy(char *dest, char const *src);
void s_str(char *str);
int my_strlen(char const *str);
int my_show_word_array(char * const *tab);
void my_revstr(char *str);
int my_putstr(char const *str);
void my_put_nbr(int nb);
void my_putchar(char c);
char *my_strdup(char const *src);
void my_printf(char *str, ...);
int binary_nbr(int nb);
int my_atoi(char *str);
char *my_itoa(int number);
char **my_strlim(char *str, char *bor);
char *my_strcat(char *string_one, char *string_two);
int my_strcmp(char const *str_one, char const *str_two);

#endif /* !MY_H_ */
