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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("The number %d is ", n);
	if (n > 0)
		printf("positive");
	else if (n == 0)
		printf("zero");
	else
		printf("negative");
	printf("\n");
	return (0);
}
