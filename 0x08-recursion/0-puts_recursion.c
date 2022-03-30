#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer block of memoty to fill
 * Return: void
 */

void _puts_recursion(char *s)

{
if (s=='\0')
{

_putschar('\n);
return;
}

_putschar (*s);
_puts_recursion(s + 1);

}

