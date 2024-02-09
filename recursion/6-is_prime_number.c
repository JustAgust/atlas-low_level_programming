#include "main.h"
/**
 * is_prime_number - checks input int for prime or even
 * @n: input int to be examined recursively
 * Return: 1 for prime 0 for not.
 */
int is_prime_number(int n, int i)
{
  if (n <= 1)
    {
        return (0);
    }
    if (n == 2)
    {
        return (1);
    }
    if (n % i == 0)
    {
        return (0);
    }
    if (i * i > n)
    {
        return (1);
    }
    return (is_prime_number(n, i + 1));
}
