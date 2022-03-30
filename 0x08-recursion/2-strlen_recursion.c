#include "main.h"
/**
 * _strlen_recursion - returnes the length of string
 * @s : string
 *
 * Return: on success 1
 * On error : -1
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
