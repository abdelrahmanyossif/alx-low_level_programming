#include <stdio.h>


/**
 * main - Enrty point
 *
 * Description: print the alphabet in lowercase
 *
 * Return: Always (0) (success)
*/

int main(void)
{
	char ch1 = 'a';
	char ch2 = 'A';

	while (ch1 <= 'z')
	{
		putchar(ch1);
		ch1++;
	}
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');

	return (0);
}
