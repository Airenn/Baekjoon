#include <stdio.h>

int main()
{
	int A = 0; // 고정 비용
	int B = 0; // 가변 비용
	int C = 0; // 판매 비용

	scanf("%d %d %d", &A, &B, &C);

	if (C > B)
		printf("%d", A / (C - B) + 1);

	else
		printf("-1");
}