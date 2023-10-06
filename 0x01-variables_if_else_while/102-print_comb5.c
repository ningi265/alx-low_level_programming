#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	int j;

	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			for (k = 0; k <= 9; i++)
			{
				if (!((k == j) || (j == i) || (j > i) || (k > j)))
			}
			putchar(k);
			putchar(j);
			putchar(i);

			if (!(i == '9' && k == '7' && j == '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
