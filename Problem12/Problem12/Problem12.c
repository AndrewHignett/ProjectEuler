#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Naive and inneficient approach
double divisorCount(int number)
{
	int count = 1;
	for (int i = 1; i <= number/2; i++)
	{
		if (number % i == 0)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int triangle = 0, count = 0, number = 1;
	while (count <= 500)
	{
		triangle = number * (number + 1) / 2;
		count = divisorCount(triangle);		
		number++;
	}
	printf("%d\n", triangle);
}