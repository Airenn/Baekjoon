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
������ �������� ���� ��
22 / 7 => 21 / 7 + 1 = 4
20 / 7 => 19 / 7 + 1 = 3

������ ����
21 / 7 => 20 / 7 + 1 = 3

*/