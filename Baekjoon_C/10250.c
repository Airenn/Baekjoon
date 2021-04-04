#include <stdio.h>

int main()
{
	int T, H, W, N;
	int num;

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf_s("%d %d %d", &H, &W, &N);

		if(N % H != 0)
			num = (N % H) * 100 + (N / H) + 1;

		else

		printf("%d", num);
	}
}