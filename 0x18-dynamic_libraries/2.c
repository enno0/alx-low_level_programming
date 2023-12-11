#include "main.h"
/**
 * _isupper - Checks if a character is an uppercase letter
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @s: The string for which to compute the length
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}
