#include <stdio.h>
/**
 *main- Entry point
 *Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 57)
		{
			continue;
		}
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
