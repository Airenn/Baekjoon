#include <stdio.h>

int main()
{
	int num = 0;
	int count = 1;
	int min = 1;
	int max = 1;

	scanf_s("%d", &num);

	while (1)
	{
		if (min <= num && max >= num)
		{
			printf("%d", count);
			break;
		}

		else
		{
			min = max + 1;
			max = max + (count * 6);
			count++;
		}
	}
}