#include <stdio.h>
int main()
{
    int x, sum = 0;
    printf("Enter number: ");
    scanf("%d", &x);
loop:
    if (x > 0)
    {
        sum += x % 10;
        x /= 10;
        goto loop;
    }
    printf("%d", sum);
}