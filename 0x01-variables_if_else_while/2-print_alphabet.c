#include <stdio.h>


/**
 * main - Enrty point
 *
 * Description: print the alphabet in lowercase
 *
 * Return: (0) (success)
*/

int main(void)
{
	char ch = 'a';
	while ('a' <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return 0;
}
