#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program prints the number of arguments passed into it.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    (void)argv; // Explicitly cast argv to void to indicate it's unused
    printf("%d\n", argc - 1); // Print the number of arguments (excluding the program name)
    return 0;
}
