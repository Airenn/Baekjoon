#include <stdio.h>

int han(int num)
{
	int inp1, inp2, cnt = 0;

	if (num < 100)
		return num;

	else // num >= 100
	{
		for (int i = 100; i <= num; i++)
		{
			inp1 = (i / 100) - (int)((i / 10) % 10);
			inp2 = (int)((i / 10) % 10) - (i % 10);

			if (inp1 == inp2)
				cnt++;
		}
		return cnt + 99;
	}
}

int main(void) {

	int num = 0;

	scanf("%d", &num);

	printf("%d", han(num));

	return 0;
}
