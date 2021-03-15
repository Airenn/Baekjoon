#include <stdio.h>

int main()
{
	int j = 0;
	int cnt = 0;
	int num = 0;
	char string[100];


	scanf("%d", &cnt);

	num = cnt;

	while (cnt--)
	{
		int alphabet[26] = { 0, };

		scanf("%s", string);

		// 1.현재 알파벳 배열 0인지 확인 => 0이면 연속되지 않은 것, 1이면 이미 연속되는 문자 존재(그룹 단어 아님)
		for (int i = 0; string[i] != '\0'; i++)
		{
			if (alphabet[string[i] - 'a'] == 1) // 그룹 단어 아님
			{
				num--;
				break; // 다음 문자로 넘어감
			}
			// 2.문자열 같은 알파벳 처음 ~ 끝까지 순회
			else

				j = i;

			while (1) // 연속되면
			{
				if (string[j] == string[j + 1])
					j++;

				else // 연속되지 않는 문자열이면
				{
					alphabet[string[j] - 'a'] = 1; // 연속되는 끝 알파벳 ~ 다음 알파벳 다르면 연속되는 문자가 끝이므로 알파벳 배열에서 1로 설정
					i = j; // 다음 알파벳 부터 처음부터 순회
					break;
				}
			}
		}
	}
	printf("%d", num);
}