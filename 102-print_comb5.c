#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int fristdigit = 0, seconddigit;

	while (fristdigit <= 99)
	{
		seconddigit = fristdigit;
		while (seconddigit <= 99)
		{
			if (seconddigit != fristdigit)
			{
				putchar((fristdigit / 10) + 48);
				putchar((fristdigit % 10) + 48);
				putchar(' ');
				putchar((seconddigit / 10) + 48);
				putchar((seconddigit % 10) + 48);

				if (fristdigit != 98 || seconddigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconddigit++;
		}
		fristdigit++;
	}
	putchar('\n');

	return (0);
}
