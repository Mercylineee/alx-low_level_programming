#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer
 * Return:0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

/**
 *  the line (unsigned long)sizeof(a) uses the %lu, a special code that tells printf to expect a number
 */
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
/** this displays the size of the char variable (a) in bytes 
 * Since a char always occupies 1 byte of memory, the code will print "Size of char: 1 byte(s)"
 */

