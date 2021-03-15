#include <stdio.h>

int main()
{
	char string[15];
	int time = 0; // 다이얼 시간
	int word = 0;
	scanf("%s", string);

	for (int i = 0; string[i] != '\0'; i++)
	{
		word = string[i] - 0x41;
		if ((word != 18) && (word != 21) && (word != 24) && (word != 25))
			time += (word / 3) + 3;

		else
			time += (word / 3) + 2;
	}

	printf("%d", time);
}