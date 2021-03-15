#include <stdio.h>

int main(void)
{
	int input;
	int a = 0, cnt = 1, flag = -1;

	scanf_s("%d", &input);
	while (a < input)
	{
		a += cnt;
		cnt += 1;
		flag *= -1;
	}
	a = a - (cnt - 1);

	if (flag > 0)
		printf("%d/%d\n", cnt + a - input, input - a);
	else
		printf("%d/%d\n", input - a, cnt + a - input);

	return 0;
}