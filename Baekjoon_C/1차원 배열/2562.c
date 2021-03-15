#include <stdio.h>

int main()
{
	int Arr[9] = { 0 };
	int max = 0;
	int j;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &Arr[i]);
		if (Arr[i] > max)
		{
			max = Arr[i];
			j = i + 1;
		}
	}

	printf("%d\n%d", max, j);
}