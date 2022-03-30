include "main.h"
/**
 * sqrt2 - makes it possible to evaluate frome 1 to n
 * @a: same number as n
 * @b: number that itrates from one to n
 *
 * Return: on success 1
 * On error: -1
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 *_sqrt_recursion - reeturns the natural square root of n
 *@n: Number integer
 *
 * Return: on success 1
 * On error: -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

