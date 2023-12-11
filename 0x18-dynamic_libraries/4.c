#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination buffer
 * @src: The source string to be appended
 *
 * Return: A pointer to the destination buffer
 */
char *_strcat(char *dest, char *src)
{
    char *start = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; /* Null-terminate the destination string */
    return start;
}

/**
 * _strncat - Concatenates n characters from the source to the destination
 * @dest: The destination buffer
 * @src: The source string to be appended
 * @n: The number of characters to concatenate
 *
 * Return: A pointer to the destination buffer
 */
char *_strncat(char *dest, char *src, int n)
{
    char *start = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0'; /* Null-terminate the destination string */
    return start;
}

/**
 * _strncpy - Copies up to n characters from source to destination
 * @dest: The destination buffer
 * @src: The source string
 * @n: The number of characters to copy
 *
 * Return: A pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *start = dest;

    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0)
    {
        *dest = '\0'; /* Pad with null characters if necessary */
        dest++;
        n--;
    }

    return start;
}