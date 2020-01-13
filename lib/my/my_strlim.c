/*
** EPITECH PROJECT, 2020
** MY_LIBRARY
** File description:
** my_strlim
*/

#include "my.h"

int	find_border(char character, char *border)
{
    for (int i = 0; border[i] != '\0'; i = i + 1)
        if (character == border[i])
            return (1);
    return (0);
}

int	length_border(char const *string, char *border, int string_position)
{
    if (find_border(string[string_position], border) == 1)
        while (find_border(string[string_position], border) == 1)
            string_position = string_position + 1;
    return (string_position);
}

int count_words(char const *string, char *border)
{
    int number_of_words = 0;

    for (int i = 0; string[i] != '\0'; i = i + 1) {
        i = length_border(string, border, i);
        number_of_words = number_of_words + 1;
    }
    return (number_of_words);
}

int length_word(char const *string, char *border, int i)
{
    int length_word = 0;

    while (string[i] != '\0' && find_border(string[i], border) == 0) {
        length_word = length_word + 1;
        i = i + 1;
    }
    return (length_word);
}

char **my_strlim(char *str, char *bor)
{
    char **result = malloc(sizeof(char *) * (count_words(str, bor) + 1));
    int i = 0;
    int all_words = 0;
    int word = 0;

    while (str[i] != '\0') {
        word = 0;
        for (i = i; str[i] != '\0' && find_border(str[i], bor) == 1; i = i + 1);
        result[all_words] = malloc(sizeof(char) *
                            (length_word(str, bor, i) + 1));
        for (i = i; str[i] != '\0' && find_border(str[i], bor) == 0;
            i = i + 1, word = word + 1)
            result[all_words][word] = str[i];
        result[all_words][word] = '\0';
        all_words = all_words + 1;
        for (i = i; str[i] != '\0' && find_border(str[i], bor) == 1; i = i + 1);
    }
    result[all_words] = NULL;
    return (result);
}
