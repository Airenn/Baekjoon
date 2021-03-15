#include <stdio.h>

int self_num(int num) // 생성자 함수
{
	int sum = num;

	while (num >= 1)
	{
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

int main()
{
	int check;
	int arr[10001];

	for (int i = 1; i < 10001; i++)
	{
		check = self_num(i);

		if (check < 10001)
			arr[check] = 1;
	}

	for (int i = 1; i < 10001; i++)
	{
		if (arr[i] != 1)
			printf("%d\n", i);
	}

}