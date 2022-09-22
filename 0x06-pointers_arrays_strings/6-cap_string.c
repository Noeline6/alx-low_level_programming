#include <stdio.h>
#include "main.h"

/**
 * cap_string - Comvert initials to uppercase
 * @c: string to capitalize
 * Return: capitalized string
 */

char *cap_string(char *c)
{
	int i;

	i = 0;

	if (c[i] >= 'a' && c[i] <= 'z')
	{
		c[i] = c[i] - 32;
	}

	for (i = 0; c[i] != '\0'; i++)
	{
		switch (c[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case ')':
			case '(':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				{
					c[i + 1] = c[i + 1] - 32;
				}
		}
	}
	return (c);
}
