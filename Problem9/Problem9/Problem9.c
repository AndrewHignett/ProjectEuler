#include <stdio.h>

int triplet()
{
	for (int a = 1; a < 500; a++)
	{
		for (int b = a + 1; b < 1000 - b - a; b++)
		{
			int c = 1000 - a - b;
			if (a * a + b * b == c * c)
			{
				//Product of abc
				return a * b*c;
			}
		}
	}
}

int main()
{
	printf("%d\n", triplet());
}