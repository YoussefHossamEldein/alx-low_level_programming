#include "main.h"
/**
 * print_line - function that draw an underline
 * Return: always 0
 * @n: no of times
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
