/*
** EPITECH PROJECT, 2019
** CPE_getnextline_2019
** File description:
** get_next_line
*/

#include "my.h"

int my_find_backslash_n(char *string)
{
    for (int i = 0; string[i] != '\0'; i = i + 1)
        if (string[i] == '\n')
            return (1);
    return (0);
}

int str_len(char const *string)
{
    int i = 0;
    for (; string[i] != '\0'; i = i + 1);
    return (i);
}

char *my_concat_string(char *string_one, char *string_two, int len_two)
{
    int len_one = str_len(string_one);
    char *destination = malloc(sizeof(char) * (len_one + len_two + 1));

    if (string_one == NULL)
        return (string_two);
    if (string_two == NULL)
        return (string_one);
    if (destination == NULL)
        return (NULL);
    for (int i = 0; i < len_one; i++)
        destination[i] = string_one[i];
    for (int i = 0; i < len_two; i++)
        destination[i + len_one] = string_two[i];
    destination[len_one + len_two] = '\0';
    return (destination);
}

char *rest_buf(char *string)
{
    char *rest_of_buffer = NULL;
    int len_buffer = str_len(string);
    int len_line = 0;

    for (; string[len_line] != '\0' && string[len_line] != '\n'; len_line++);
    if (string[len_line] == '\n')
        len_line = len_line + 1;
    else
        len_line = len_line;
    rest_of_buffer = malloc(sizeof(char) * (len_buffer - len_line + 1));
    if (rest_of_buffer == NULL)
        return (NULL);
    for (int i = 0; string[len_line] != '\0'; i = i + 1) {
        rest_of_buffer[i] = string[len_line];
        len_line = len_line + 1;
    }
    rest_of_buffer[len_line] = '\0';
    return (rest_of_buffer);
}

char *get_next_line(int fd)
{
    char *buffer = malloc(sizeof(char) * (READ_SIZE + 1));
    static char *save = "\0";
    char *line = "\0";
    int length = 0;

    if (fd == -1 || buffer == NULL || READ_SIZE <= 0)
        return (NULL);
    if (str_len(save) != 0)
        if (!(line = my_concat_string(save, NULL, 0)))
            return (NULL);
    while ((length = read(fd, buffer, READ_SIZE)) > 0) {
        line = my_concat_string(line, buffer, length);
        if (line == NULL || my_find_backslash_n(line) == 1)
            break;
    }
    if (!str_len(line) || !line || !(save = rest_buf(line)) || length <= 0)
        return (NULL);
    for (int i = 0; line[i] != '\0'; i = i + 1)
        line[i] = (line[i] == '\n') ? '\0' : 0;
    return (line);
}
