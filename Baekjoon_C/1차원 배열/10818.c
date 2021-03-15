#include <stdio.h>

int main()
{
	int size;
	int max = -10000001;
	int min = -max;
	int num;

	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		scanf("%d", &num);
		max = num > max ? num : max;
		min = num < min ? num : min;
	}
	printf("%d %d", min, max);
}