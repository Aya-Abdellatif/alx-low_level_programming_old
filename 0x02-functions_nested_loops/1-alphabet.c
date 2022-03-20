#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: A function that prints the alphabet, in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
