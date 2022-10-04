
Sign up
afinesami
/
holbertonschool-low_level_programming
Public
Code
Issues
Pull requests
1
Actions
Projects
Security
Insights
holbertonschool-low_level_programming/0x0B-malloc_free/0-create_array.c
@afinesami
afinesami C - malloc, free
 1 contributor
26 lines (25 sloc)  480 Bytes
#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
