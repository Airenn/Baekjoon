#include <stdio.h>

int N;
int three, five; // 3kg, 5kg 봉투 갯수

int main()
{
	scanf_s("%d", &N);

	if (N % 5 == 0) // 5kg로 나눠짐
		five = N / 5;

	else // 5kg로 나눠지지 않음
		if (N >= 5)
		{
			while (N % 5 != 0)
			{
				N -= 5;
				five++;
			}
		}
}