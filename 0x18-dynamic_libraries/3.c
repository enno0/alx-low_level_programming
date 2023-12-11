#include "main.h"
/**
 * _puts - Writes a string to the standard output (stdout)
 * @s: The string to be written
 */
void _puts(char *s)
{
    while (*s != '\0')
    {
        _putchar(*s);
        s++;
    }
}

/**
 * _strcpy - Copies a string from source to destination
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: A pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
    char *start = dest;

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
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    while (*s == ' ' || (*s >= 9 && *s <= 13))
    {
        s++; /* Skip whitespace characters */
    }

    if (*s == '-' || *s == '+')
    {
        sign = (*s == '-') ? -1 : 1;
        s++;
    }

    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}
