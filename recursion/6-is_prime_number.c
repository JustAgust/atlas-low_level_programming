#include "main.h"
/**
 * is_prime_number - checks input int for prime or even
 * @n: input int to be examined recursively
 * Return: 1 for prime 0 for not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	else
		return (pri_num(n, 2));
}

/**
 * pri_num - uses recursion to find prime number
 * @n: original number
 * @i: number to be checked
 * Return: 1 for prime 0 for not
 */
int pri_num(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
		i++;
		return (pri_num(n, i));
		}
	}
	else
		return (1);
}
