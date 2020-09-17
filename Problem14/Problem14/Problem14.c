#include <stdio.h>

long long even(long long n)
{
	return n / 2;
}

long long odd(long long n)
{
	return 3 * n + 1;
}

int main()
{
	int maxChain = 0, chainStart = 0;
	for (int i = 1; i < 1000000; i++)
	{
		int chainLength = 1;
		long long finalNum = i;
		while (finalNum != 1)
		{
			if (finalNum % 2 == 0)
			{
				finalNum = even(finalNum);
			}
			else
			{
				finalNum = odd(finalNum);
			}
			chainLength++;
		}
		if (chainLength > maxChain)
		{
			maxChain = chainLength;
			chainStart = i;
		}
	}
	printf("%d\n", chainStart);
}