/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** Copy a string into an other string
*/

char *my_strcpy(char *dest, char const *src);

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0 ; src[i] != '\0' ; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
