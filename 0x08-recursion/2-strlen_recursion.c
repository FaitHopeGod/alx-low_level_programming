#include "main.h"
/**
 * _strlen_recursion - count string length
 *
 * @s: character or string
 *
 * Return: String length integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
