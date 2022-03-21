#include "main.h"

/*
 * main - Program prints the alphabet
 * multiple times
 * Description: Program is designed to print
 * the alphabet 10 times followed
 * by a new line.
 * Return: returns 0 on success.
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i <= 9)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	i++;
	}
	_putchar('\n');
}
