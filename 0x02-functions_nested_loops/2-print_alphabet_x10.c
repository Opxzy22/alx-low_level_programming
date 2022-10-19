#include "main.h"
/**
 * print_alphabet_x10- a funtion that print a alphabet x10
 * follow by a new line
 * return zero
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	_putchar('\n');
	}
}

