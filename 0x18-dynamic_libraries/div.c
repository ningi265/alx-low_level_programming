#include <stdlib.h>

int divide(int a, int b, int *remainder)
{
	if (b == 0)
	{
		return (-1);
	}

	*remainder = a % b;
	return (a / b);
}
