#include <stdio.h>

//Finds the sum of the squares of all integers up to max
int sumSquares(int max)
{
	int sum = 0;
	for (int i = 1; i <= max; i++)
	{
		sum += i * i;
	}
	return sum;
}

//Finds the square of the sum of all integers up to max
int sumSquared(int max)
{
	int sum = 0;
	for (int i = 1; i <= max; i++)
	{
		sum += i;
	}
	return sum * sum;
}

int main()
{
	int upto = 100;
	int sumSqu = sumSquares(upto);
	int squSum = sumSquared(upto);
	int solution = squSum - sumSqu;
	printf("%d\n", solution);
}