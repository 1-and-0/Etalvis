#include <stdio.h>
int main()
{
    int x, y, count = 1;
    printf("Enter number: ");
    scanf("%d", &x);
    y = x;
    if (x % 2)
    {
    loop:
        if (y > 0)
        {
            count *= 10;
            y /= 10;
            goto loop;
        }
        count /= 10;
        x = (x / count - 1) * count + x % count;
    }
    printf("%d", x);
}