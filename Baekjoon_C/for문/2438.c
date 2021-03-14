#include <stdio.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}