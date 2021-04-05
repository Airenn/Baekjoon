#include <stdio.h>

int main()
{
	int T, k, n;
	int arr[15][15] = { 0, };

	scanf_s("%d", &T);

	for (int w = 0; w <= 14; w++)
		arr[0][w] = w + 1;

	for (int x = 1; x <= 14; x++)
	{
		for (int y = 0; y <= 14; y++)
		{
			if(y == 0)
				arr[x][y] = 1;
			else
				arr[x][y] = arr[x][y - 1] + arr[x - 1][y];
		}
	}

	for (int z = 0; z < T; z++)
	{
		scanf_s("%d", &k);
		scanf_s("%d", &n);

		printf("%d\n", arr[k][n-1]);
	}
}