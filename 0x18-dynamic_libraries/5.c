#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: An integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match, or
 * be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: The memory area to be filled
 * @b: The constant byte to fill the memory with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;

    while (n > 0)
    {
        *s = b;
        s++;
        n--;
    }

    return start;
}

/**
 * _memcpy - Copies n bytes from source to destination
 * @dest: The destination buffer
 * @src: The source buffer
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *start = dest;

    while (n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    return start;
}