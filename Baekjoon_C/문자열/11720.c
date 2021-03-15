#include <stdio.h>

int main()
{
	char word[100];
	int num, sum = 0;

	scanf("%d", &num);

	scanf("%s", word);

	for (int i = 0; i < num; i++)
		sum += (word[i] - 0x30);

	printf("%d", sum);
}