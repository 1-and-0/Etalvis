#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter number: ");
    scanf("%d", &x);
    y = x % 100 % 11 == 0 ? 1 : 0;
    printf("Result=%d", y);
}