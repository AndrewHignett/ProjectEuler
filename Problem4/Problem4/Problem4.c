#include <stdio.h>
#include <stdbool.h>

//Convert an integer to the reversed version, digit-wise
int reverseInteger(int i)
{
	int newNum = 0;
	int remainder = 0;
	while (i != 0)
	{
		remainder = i % 10;
		newNum = newNum * 10 + remainder;
		i /= 10;
	}
	return newNum;
}

//Determine if an integer is a palindrome
bool palindrome(int product)
{
	int reversed = reverseInteger(product);
	while (reversed > 0)
	{
		if (reversed % 10 != product % 10)
		{
			return false;
		}
		else
		{
			reversed /= 10;
			product /= 10;
		}
	}
	return true;
}

int main()
{
	bool lastA = false;
	int a = 999, b = 999;
	int highestPal = 0;
	for (a = 999; a > 0; a -= 1)
	{
		for (b = 999; b > 0; b -= 1)
		{			
			if (palindrome(a*b) && (a*b > highestPal))
			{
				highestPal = a*b;
			}
		}
	}
	printf("%d\n", highestPal);
}