#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
		printf("greater than 5");
	else if (lastDigit == 0)
		printf("0");
	else
		printf("less that 6 and not 0");
	printf("\n");

	return (0);
}
