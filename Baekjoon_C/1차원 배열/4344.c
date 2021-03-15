#include <stdio.h>

int main()
{
	int i, j = 0;
	int total = 0;
	float count = 0;
	float avg = 0;
	int student[1000] = { 0 };
	float total_avg[100] = { 0 };

	scanf("%d", &i);

	for (int n = 0; n < i; n++)
	{
		total = 0;
		count = 0;

		scanf("%d", &j);

		for (int m = 0; m < j; m++)
		{
			scanf("%d", &student[m]);
			total += student[m];
		}
		avg = total / j;

		for (int m = 0; m < j; m++)
		{
			if (student[m] > avg)
				count++;
		}
		total_avg[n] = ((count / j) * 100);
	}

	for (int n = 0; n < i; n++)
		printf("%.3f%%\n", total_avg[n]);

}