#include <stdio.h>

int main()
{
	int T, H, W, N;
	int num;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);

		if(N % H != 0)
			num = (N % H) * 100 + (N / H) + 1;

		else
			num = H * 100 + N / H;

		printf("%d\n", num);
	}
}