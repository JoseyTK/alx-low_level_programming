#include "main.h"

int actual_prime(int n, int i);

/**
 * is prime a number - says if an integer is a number or not
 * @n: number to ebvaluate
 *
 * return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
