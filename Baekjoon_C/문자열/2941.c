#include <stdio.h>

int main()
{
	char string[100]; // 글자 배열
	int count = 0; // 알파벳 카운트 

	scanf("%s", string);
	for (int i = 0; string[i] != '\0'; i++) // 처음 글자부터 마지막 글자까지
	{
		count++;

		if (string[i] == '-' || string[i] == '=') // c=, c-, d-, s=, z= 일때 하나로 셈 
			count--;

		else if (string[i] == 'n' && string[i + 1] == 'j' || string[i] == 'l' && string[i + 1] == 'j') // nj, lj 일떄 하나로 셈
			count--;

		else if (string[i] == 'd' && string[i + 1] == 'z' && string[i + 2] == '=') // dz= 일 때 하나로 셈
			count--;

	}
	printf("%d", count);
}