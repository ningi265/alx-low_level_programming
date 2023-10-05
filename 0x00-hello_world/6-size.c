#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of char: %lu 1 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu 4 byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu 4 byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
