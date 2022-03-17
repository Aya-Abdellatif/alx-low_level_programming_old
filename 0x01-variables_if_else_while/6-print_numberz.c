#include <stdio.h>
/**
 * main - Program prints single digits
 * 
 * Description: This program prints all single digit
 * numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: returns 0 on success
 */

int main(void)
{
	char ch;
		
	for (ch = 0; ch < 10; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
