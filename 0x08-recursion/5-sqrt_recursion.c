include "main.h"
/**
 * _sqrt_recursion - main funtion
 * @n: int n
 * Return: on success 1
 * On error: -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1);
}
/**
 *_sqrt - sqrt recursion
 *@i: Number integer
 *@n: integer parameter
 * Return: on success 1
 * On error: -1
 */
int _sqrt(int n, int i)
{
       if (n < 0)
               return (-1);
       if ((i * i) > n)
               return (-1);
       if (i * i == n)
               return (i);
       return (_sqrt(n, i + 1));
}
