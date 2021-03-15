#include <stdio.h>
#include <string.h>

int main()
{
	char string[1000000]; // 문자열 배열
	int count = 0; // 공백 카운트 

	scanf("%[^\n]", string);

	// 1. 공백을 센다
	int len = strlen(string); // Null(\0) 포함 안 함
	for (int i = 0; i < len; i++)
	{
		if (string[i] == ' ')
			count++;
	}

	// 2, 처음, 마지막 공백이 있는지 판단한다
	if (string[0] == ' ' && string[len - 1] == ' ') // 처음, 마지막 공백 o
		printf("%d", count - 1);
	else if (string[0] == ' ' && string[len - 1] != ' ') // 처음 o, 마지막 공백 o
		printf("%d", count);
	else if (string[0] != ' ' && string[len - 1] == ' ') // 처음 x, 마지막 공백 o
		printf("%d", count);
	else if (string[0] != ' ' && string[len - 1] != ' ') // 처음 x, 마지막 공백 x
		printf("%d", count + 1);

	return 0;
}