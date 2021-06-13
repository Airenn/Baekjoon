#include <stdio.h>

int main()
{
	int A, B, V;
	int day;

	scanf_s("%d %d %d", &A, &B, &V);

	day = (V - B - 1) / (A - B) + 1;

	printf ("%d", day);
}

/*
나누어 떨어지지 않을 때
22 / 7 => 21 / 7 + 1 = 4
20 / 7 => 19 / 7 + 1 = 3

나누어 질때
21 / 7 => 20 / 7 + 1 = 3

*/