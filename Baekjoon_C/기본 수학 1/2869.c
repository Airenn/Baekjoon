#include <stdio.h>
#include <math.h>

int main()
{
	int A = 0;
	int B = 0;
	int V = 0;

	scanf_s("%d %d %d", &A, &B, &V);
	printf("%d", (V - B - 1) / (A - B) + 1);
}