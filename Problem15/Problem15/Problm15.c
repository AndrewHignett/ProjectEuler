#include <stdio.h>

long long powers(long long n, int power)
{
	long long solution = 1;
	for (int i = 0; i < power; i++)
	{
		solution *= n;
	}
	return solution;
}

int main()
{
	int squareSize = 20;
	//40 moves, 20 to the right and 20 down
	//The question is: how many combinations of right and down moves are there, when there are 20 of each
	//This is 40!/(4!^2), or generically n!/((n!/2)^2)
	long long solution = 1;
	for (int i = 1; i <= squareSize*2; i++)
	{
		solution *= i;
		if (i % 2 == 0)
		{
			solution /= powers(i / 2, 2);
		}
	}
	printf("%lld\n", solution);
}