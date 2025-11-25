#include <stdio.h>
int main()
{
    int x, count = 0;
    printf("Enter number: ");
    scanf("%d", &x);
    for (int a = 100, b = 1; x / b > 10; b *= 10)
        if (x / b % a % 2)
            count++;
    printf("%d", count);
}