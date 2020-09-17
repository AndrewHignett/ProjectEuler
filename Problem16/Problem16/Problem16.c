#include <stdio.h>

int main()
{
	int solution[1000];
	solution[0] = 2;
	for (int i = 2; i <= 1000; i++)
	{
		int j = 0;
		int carry = 0;
		while (solution[j] >= 0)
		{
			//double, then add carry and work out new carry
			int doubled = solution[j] * 2 + carry % 10;
			carry = doubled / 10 + carry / 10;
			solution[j] = doubled % 10;
			j++;
		}
		if (carry > 0)
		{
			solution[j] = carry;
		}
	}
	int sum = 0;
	for (int a = 999; a >= 0; a--)
	{
		if (solution[a] >= 0)
		{
			sum += solution[a];
		}
	}
	printf("%d\n", sum);
}