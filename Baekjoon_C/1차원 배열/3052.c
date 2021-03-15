#include <stdio.h>

int main()
{
	int count = 0;
	int arr[10] = { 0 };
	int mod[42] = { 0 };

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		scanf("%d", &arr[i]);
		mod[(arr[i] % 42)] = 1;
	}

	for (int i = 0; i < sizeof(mod) / sizeof(mod[0]); i++)
	{
		if (mod[i] == 1)
			count++;
	}
	printf("%d", count);


}