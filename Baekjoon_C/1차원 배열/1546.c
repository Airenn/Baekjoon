#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size = 0;
	int max = 0;
	float avg = 0;

	scanf("%d", &size);

	float* arr = malloc(sizeof(float) * size);

	for (int i = 0; i < size; i++)
	{
		scanf("%f", &arr[i]);

		if (arr[i] > max)
			max = arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		avg += arr[i] / max * 100;
	}

	printf("%0.2f", (avg / size));

}