#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter number: ");
    scanf("%d", &x);
    y = x % 100 == x / 100 ? 1 : 0;
    printf("Result=%d", y);
}