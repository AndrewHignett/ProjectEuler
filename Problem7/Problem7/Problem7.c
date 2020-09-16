#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isprime(int n)
{
	//inneficient, tests up to n
	int i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			return false;
		}
		i += 1;
	}
	return true;
}

int main()
{
	int primecount = 0;
	int number = 2;
	while (primecount < 10001)
	{
		if (isprime(number))
		{
			primecount += 1;
		}
		number += 1;
	}
	printf("%d\n", number - 1);
}