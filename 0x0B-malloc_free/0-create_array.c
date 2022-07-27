#include "main.h"

/**
 * create_array -creates an array of chars, and initializes
 *
 * @size: size of the array
 *
 * @c: array of char
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr; if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	/* check if malloc was successful */
	if (i == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
