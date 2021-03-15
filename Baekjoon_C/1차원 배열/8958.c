#include <stdio.h>
#include <string.h>

int main()
{
	int i, j = 0;
	int count = 0;	// 테스트 케이스 개수
	int score = 0;	// 총 점수
	int plus = 0; // 연속으로 맞은 개수
	char string[82];

	scanf("%d", &count);

	for (i = 0; i < count; i++)
	{
		score = 0;
		plus = 0;
		scanf("%s", &string);

		for (j = 0; j < strlen(string); j++)
		{
			if (string[j] == 'O')
				plus++;

			else
				plus = 0;
			score += plus;
		}

		printf("%d\n", score);
	}
}