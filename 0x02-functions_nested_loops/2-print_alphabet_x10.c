#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times in lowercases
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
