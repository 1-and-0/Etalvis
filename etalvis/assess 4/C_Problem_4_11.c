#include <stdio.h>
int main()
{
    int x, digit = 0;
    printf("Enter number: ");
    scanf("%d", &x);
loop:
    if (x > 0)
    {
        x /= 10;
        digit++;
        goto loop;
    }
    printf("%d", digit);
}