#include <stdio.h>
#include <string.h>

int main()
{
	char word[100];
	int alphabet[26] = { 0, };

	scanf("%s", word);

	for (int i = 0; i < sizeof(alphabet) / sizeof(int); i++)
		alphabet[i] = -1;

	for (int i = 0; i < strlen(word); i++)
	{
		if (alphabet[word[i] - 0x61] == -1)
			alphabet[word[i] - 0x61] = i;
	}
	for (int i = 0; i < sizeof(alphabet) / sizeof(int); i++)
		printf("%d ", alphabet[i]);

}