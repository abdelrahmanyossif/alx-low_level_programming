#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
