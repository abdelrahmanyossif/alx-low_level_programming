#include "function_pointers.h"

/**
 * int_index - searches for intger
 * @array: the int array
 * @size: the array size
 * @cmp: the compare function
 *
 * Return: the intger index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int = 1;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
