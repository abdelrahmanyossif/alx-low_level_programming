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

	while (ch1 <= 'z' && ch2 <= 'Z')
	{
		putchar(ch1);
		putchar(ch2);
		ch1++;
		ch2++;
	}
	putchar('\n');

	return (0);
}
