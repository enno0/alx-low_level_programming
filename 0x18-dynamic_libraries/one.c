#include "main.h"
/**
 * _islower - Checks if a character is a lowercase letter
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}
//
/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
//
/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer for which to compute the absolute value
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
    return (n < 0) ? -n : n;
}
