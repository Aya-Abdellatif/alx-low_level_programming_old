#include <stdio.h>
/**
 * main - Main function contains a string that prints to stderr
 *
 * Description: Program that prints to the standard error
 *
 * return: Returns 1
 */

int main(void)
{
	write(stderr, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n");
	return(1);
}
