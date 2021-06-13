#include <stdio.h>

int main()
{
    int num1, num2, a, b, count = 0;

    scanf_s("%d", &num1);
    num2 = num1;

    do
    {
        a = num1 / 10;
        b = num1 % 10;
        num1 = b * 10 + ((a + b) % 10);
        count++;
    } while (num1 != num2);
    printf("%d", count);
}