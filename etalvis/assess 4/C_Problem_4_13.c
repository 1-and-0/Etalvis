#include <stdio.h>
int main()
{
    int x, rev = 0;
    printf("Enter number: ");
    scanf("%d", &x);
loop:
    if (x > 0)
    {
        rev = 10 * rev + x % 10;
        x /= 10;
        goto loop;
    }
    printf("%d", rev);
}