#include "main.h"
/**
 * _strstr - Locates the first occurrence of the substring needle in
 * the string haystack
 * @haystack: The string to be searched
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
    {
        char *h = haystack;
        char *n = needle;

        while (*n != '\0' && *h == *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')
        {
            return haystack; /* Needle found in haystack */
        }

        haystack++;
    }

    return NULL; /* Needle not found */
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
