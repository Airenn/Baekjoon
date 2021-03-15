#include <stdio.h>

int main()
{
	int mul = 0;
	int num = 0;
	int arr[10] = { 0 };

	scanf("%d", &mul);
	scanf("%d", &num);
	mul *= num;

	scanf("%d", &num);
	mul *= num;

	while (mul > 0)
	{
		arr[(mul % 10)]++;
		mul /= 10;
	}

	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
		printf("%d\n", arr[i]);
}