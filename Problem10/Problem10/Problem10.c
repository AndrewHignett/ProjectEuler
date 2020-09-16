#include <stdio.h>
#include <stdbool.h>

//Inefficient, as it uses a basic trial method
bool isPrime(int number)
{
	for (int i = 2; i <= number/2; i++)
	{
		if ((number % i == 0) && (i != number))
		{
			return false;
		}
	}
	return true;
}

int main()
{
	//Must be a long long, as they add up to beyond the int limit
	long long sum = 0;
	for (int i = 2; i < 2000000; i++)
	{		
		if (isPrime(i))
		{
			sum += i;
		}
	}
	printf("%lli\n", sum);
}