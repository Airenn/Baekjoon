#include <stdio.h>
#include <string.h>

int main()
{

	int alphabet[26] = { 0, };
	int max, temp = 0;
	char word[1000000];
	int count = 0;

	scanf("%s", word);
	int len = strlen(word);

	for (int i = 0; i <= len; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
		{
			alphabet[word[i] - 'A'] += 1;
		}
		else if (word[i] >= 'a' && word[i] <= 'z')
		{
			alphabet[word[i] - 'a'] += 1;
		}
	}

	// 알파벳별 최대 개수
	for (int i = 0; i < 26; i++)
	{
		if (count < alphabet[i])
		{
			count = alphabet[i];
			max = i;
			temp = 0;
		}

		else if (count == alphabet[i])
			temp = 1;
	}

	if (temp == 0)
		printf("%c", max + 0x41);

	else
		printf("?");

	return 0;
}