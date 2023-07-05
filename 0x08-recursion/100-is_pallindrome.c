#include "main.h"

/**
 * _strlen - calculates the length of a string.
 * @s: a pointer to the string.
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * palindrome_helper - recursive helper function to check
 *                     if a string is palindrome.
 * @s: the string to be checked.
 * @len: the lenght of the string.
 * @i: the current index being compared
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int palindrome_helper(char *s, int len, int i)
{
	if (len <= i)
		return (1);
	else if (s[i] != s[len])
		return (0);
	return (palindrome_helper(s, len - 1, i + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string to be checked.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);
	int i = 0;

	return (palindrome_helper(s, len - 1, i));
}
