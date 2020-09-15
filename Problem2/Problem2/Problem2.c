#include <stdio.h>

int main()
{
	int fiba = 1, fibb = 2;
	int sum = 0;
	int old;
	while (fibb < 4000000)
	{
		//This will ignore fiba in the sum, but doesn't matter as fiba is odd
		old = fibb;
		fibb = fibb + fiba;
		fiba = old;
		if (fiba % 2 == 0)
		{
			sum += fiba;			
		}
	}
	printf("%d\n", sum);
}