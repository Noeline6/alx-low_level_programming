#include <stdio.h>
#include "main.h"

/**
 * _puts - Func body
 * Description: Prints out a string to stdout
 * @str: String to print to stdout
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
