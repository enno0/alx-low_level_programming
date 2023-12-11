#include "main.h"
/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }

    return NULL;
}

/**
 * _strspn - Calculates the length of the initial segment of s which
 * consists only of characters in accept
 * @s: The string to be searched
 * @accept: The string containing characters to match
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;

    while (*s != '\0' && _strchr(accept, *s) != NULL)

    {
        count++;
        s++;
    }

    return count;
}

/**
 * _strpbrk - Locates the first occurrence in s of any character in accept
 * @s: The string to be searched
 * @accept: The string containing characters to search for
 *
 * Return: A pointer to the first occurrence of a character in accept in s,
 * or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        if (_strchr(accept, *s) != NULL)

        {
            return s;
        }
        s++;
    }

    return NULL;
}