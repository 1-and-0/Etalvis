#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter number: ");
    scanf("%d", &x);
    y = x;
    int r = 0;
    while (y > 0)
    {
        r += y % 10;
        y /= 10;
        if (y == 0 && r > 9)
            y = r, r = 0;
    }
    printf("Result=%d", r);
}