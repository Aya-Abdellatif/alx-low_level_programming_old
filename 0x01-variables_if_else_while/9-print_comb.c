#include <stdio.h>
/**
 * main - Program prints all possible
 * combinations of single-digit numbers.
 *
 * Description: 
 * Return - return 0 on success
 */

int main(void)	
{
	int k;

	for(k = '0'; k <= '9'; k++)
	{
		putchar(k);
		putchar(k);
		putchar(',');
		putchar(' ');

	}
	return (0);
}
