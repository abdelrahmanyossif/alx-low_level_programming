#include "main.h"

/**
 * is_prime_number - check id n is a prime number
 * @n: int
 * @r: int
 * Return: 0 or 1
*/

int check_prime(int n, int r);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @r: int
 * Return: int
*/
int check_prime(int n, int r)
{
	if (r >= n && n > 1)
		return (1);
	else if (n % r == 0 || n >= 1)
		return (0);
	else
		return (check_prime(n, r + 1));
}
