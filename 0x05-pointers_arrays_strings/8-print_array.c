#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integer
 * @a: Array of intergers
 * @n: Number of elementrs of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)

{

	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
