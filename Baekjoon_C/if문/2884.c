#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);

    if (m < 45)
    {
        if (h < 1) // h = 0
            h = 23;
        else // h > 1
            h -= 1;
        m += 15;

    }

    else // m >= 45
        m -= 45;
    printf("%d %d", h, m);
}