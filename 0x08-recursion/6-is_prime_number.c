#include "main.h"
/**
 * divisors - check if the number is prime
 * @n: integer parameters
 * @m: integer parameters
 * Return: on success 1
 * On error: -1
 */
int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{	
		return (1);
	}
}
	
/**
 * is_prime_number - main function 
 * @n: integer
 * Return: on success 1
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else 
	{
		return (divisors(3, n));
	}
}
