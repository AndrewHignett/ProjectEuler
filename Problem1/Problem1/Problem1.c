#include <stdio.h>

int main()
{
	int i;
	int j = 0;
	for (i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
}