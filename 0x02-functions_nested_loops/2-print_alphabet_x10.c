#include "main.h"

/**
 * print_alphabet_x10 - Program prints the
 * alphabet multiple times
 * Description: This program is designed to
 * print the alphabet 10 times
 * followed by a new line.
 * Return: void .
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i <= 9)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	i++;
	}
}
