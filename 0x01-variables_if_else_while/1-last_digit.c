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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit > 5)
		printf("greater than 5");
	else if (lastDigit == 0)
		printf("0");
	else
		printf("less that 6 ");
	printf("\n");

	return (0);
}
