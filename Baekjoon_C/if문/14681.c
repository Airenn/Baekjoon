#include <stdio.h>

int main()
{
    int x, y = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > 0 && y > 0) // 1
        printf("1");

    else if (x < 0 && y > 0) // 2
        printf("2");

    else if (x < 0 && y < 0) // 3
        printf("3");

    else
        printf("4");

}