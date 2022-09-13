#include "main.h"

/**
 * print_alphabet_x10 - This function prints the alphabet 10 times
 * in lowercase, followed by a newline
 */
void print_alphabet_x10(void)
{
	int j, i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
