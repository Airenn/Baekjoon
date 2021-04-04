#include <stdio.h>

int x = 0; // 입력 값
int d = 0; // 몇 번째 대각선
int t = 0; // 대각선에서 몇 번째 위치

int main()
{
	scanf("%d", &x);

	// 1. 몇 번째 대각선
	for (; d * (d + 1) / 2 < x; d++) // 삼각수 공식 Tri(n) = Σk = n(n+1)/2
	{
	}
	// 2. 대각선에서 몇 번쨰 위치
	t = x - (d * (d - 1) / 2); // 이전 대각선의 개수를 뺌

	if (d % 2 == 0) // 대각선이 짝수
	{
		printf("%d/%d", t, (d - t + 1));
	}

	else
	{
		printf("%d/%d", (d - t + 1), t);
	}

}