#include <stdio.h>
int main()
{
    int x, count = 1, y;
    printf("Enter number: ");
    scanf("%d", &x);
    y = x;
loop:
    if (y > 0)
    {
        count *= 10;
        y /= 10;
        goto loop;
    }
    count /= 10;
    x = x / count + (x % count / 10) * 10 + x % 10 * count;
    printf("%d", x);
}