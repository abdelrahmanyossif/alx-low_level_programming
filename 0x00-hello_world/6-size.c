#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char c;
	long num1;
	long long num2;
	float f;

	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("size of an int: %zu byte(s)\n", sizeof(num));
	printf("size of a long int: %zu byte(s)\n", sizeof(num1));
	printf("size of a long long int: %zu byte(s)\n", sizeof(num2));
	printf("size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
