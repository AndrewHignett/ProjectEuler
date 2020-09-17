#include <stdio.h>

//1, 2, 3, 4, 5, 6, 7, 8, 9
int finalDigit(int digit)
{
	switch (digit)
	{
	case 1:
		return 3;
	case 2:
		return 3;
	case 6:
		return 3;
	case 4:
		return 4;
	case 5:
		return 4;
	case 9:
		return 4;
	case 3:
		return 5;
	case 7:
		return 5;
	case 8:
		return 5;
	}
	return 0;
}

//10, 11, 12, 13, 14, 15, 16, 17, 18, 19
int special(int digit)
{
	switch (digit)
	{
	case 0:
		return 3;
	case 1:
		return 6;
	case 2:
		return 6;
	case 3:
		return 8;
	case 4:
		return 8;
	case 5:
		return 7;
	case 6:
		return 7;
	case 7:
		return 9;
	case 8:
		return 8;
	case 9:
		return 8;
	}
}

//20, 30, 40, 50, 60, 70, 80, 90
int tens(int digit)
{
	switch (digit)
	{
	case 2:
		return 6;
	case 3:
		return 6;
	case 4:
		return 5;
	case 5:
		return 5;
	case 6:
		return 5;
	case 7:
		return 7;
	case 8:
		return 6;
	case 9:
		return 6;
	}
}

int main()
{
	int sum = 0;
	for (int i = 1; i < 1001; i++)
	{
		if (i == 1000)
		{
			sum += 11;
		}
		else if (100 <= i && i < 1000)
		{
			//hundred
			sum += 7;
			sum += finalDigit(i / 100);
			int remainder = i % 100;
			if (remainder > 0) {
				//include and
				sum += 3;
				if (remainder >= 20)
				{
					//in the 10's (but 20+)

					
					sum += tens(remainder / 10);

					if (remainder % 10 > 0)
					{
						//final digit
						sum += finalDigit(remainder % 10);
					}
				}
				else if (remainder < 10)
				{
					//final digit
					sum += finalDigit(remainder);
				}
				else
				{
					//remainder between 10 and 19, inclusive
					sum += special(remainder % 10);
				}
				
			}

		}
		else if (i >= 20)
		{
			//in the 10's (but 20+)


			sum += tens(i / 10);

			if (i % 10 > 0)
			{
				//final digit
				sum += finalDigit(i % 10);
			}
		}
		else if (i < 10)
		{
			//final digit
			sum += finalDigit(i);
		}
		else
		{
			//remainder between 10 and 19, inclusive
			sum += special(i % 10);
		}
	}
	printf("%d\n", sum);
}