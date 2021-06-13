#include <stdio.h>

int strlen(char* arr)
{
	int size = 0;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}

void reverse(char* arr, int size) // arr[] = *arr
{
	char temp;

	for (int i = 0; i < size / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[(size - i) - 1];
		arr[(size - i) - 1] = temp;
	}

}

int main()
{
	char A[10001] = { 0, }, B[10001] = { 0, }, C[10002] = { 0, };
	int A_size, B_size, C_size;
	int num = 0;
	int carry = 0;

	// 2. 두 정수 A, B 입력 받음
	scanf_s("%s", A, sizeof(A));
	scanf_s("%s", B, sizeof(B));

	A_size = strlen(A);
	B_size = strlen(B);

	reverse(A, A_size);
	reverse(B, B_size);

	for (int i = 0; i < (A_size > B_size ? A_size - B_size : B_size - A_size); i++)
	{
		if (A_size > B_size)
			B[B_size + i] = '0';
		else
			A[A_size + i] = '0';
	}

	for (int i = 0; i < (A_size > B_size ? A_size : B_size); i++)
	{
		if (((A[i] - '0') + (B[i] - '0') + C[i] >= 10))
		{
			C[i + 1] = '1' - '0';
		}
		C[i] = (((A[i] - '0') + (B[i] - '0') + C[i]) % 10) + '0';
	}

	C_size = strlen(C);
	if (C[C_size - 1] == 1) C[C_size - 1] = '1';
	reverse(C, C_size);
	printf("%s", C);
}