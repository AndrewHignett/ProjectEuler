#include <stdio.h>

int main()
{
	long answer = 0, start = 20;
	while (answer == 0)
	{
		if (start % 20 == 0)
		{
			if (start % 19 == 0)
			{
				if (start % 18 == 0)
				{
					if (start % 17 == 0)
					{
						if (start % 16 == 0)
						{
							if (start % 15 == 0)
							{
								if (start % 14 == 0)
								{
									if (start % 13 == 0)
									{
										if (start % 12 == 0)
										{
											if (start % 11 == 0)
											{
												answer = start;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		start += 1;
	}
	printf("%d\n", answer);
}