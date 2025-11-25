#include <stdio.h>
int main()
{
    int x, count = 0;
    printf("Enter number: ");
    scanf("%d", &x);
    for (int y = x; y > 0; y /= 10)
        if (y % 10 % 2)
            count++;
    printf("%d", count);
}