#include <stdio.h>
/**
 * main - Print sizes of various types 
 *
 * Description: This program prints the size of various types on the computer
 *
 * return - 0
 */

int main(void)
{
	int intType;
    	float floatType;
    	double doubleType;
   	char charType;

    
    	printf("Size of int: %zu bytes\n", sizeof(intType));
    	printf("Size of float: %zu bytes\n", sizeof(floatType));
    	printf("Size of double: %zu bytes\n", sizeof(doubleType));
    	printf("Size of char: %zu byte\n", sizeof(charType));

	return (0);
}
