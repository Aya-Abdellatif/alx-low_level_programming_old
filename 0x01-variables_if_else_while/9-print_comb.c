#include <stdio.h>
/**
 * main - Program prints all possible
 * combinations of single-digit numbers.
 *
 * Description: This program is designed to print
 * all possible combinations of single-digits in
 * ascending order using the putchar() function.
 *
 * Return: returns 0 on success.
 */

int main(void)
{
	int k;

	for (k = '0'; k < '9'; k++)
	{
		putchar(k);
		putchar(',');
		putchar(' ');
	}
	putchar('9''\n');
	return (0);
}
