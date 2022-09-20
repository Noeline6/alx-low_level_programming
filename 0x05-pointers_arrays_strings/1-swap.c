#include<stdio.h>
#include "main.h"
/**
*swap_int - swaps the values of two integers.
*@a: 98
*@b: 42
*Return: not.
*/
void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;
}
