#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter number: ");
    scanf("%d", &x);
    y = ((x / 100) & 1) && ((x % 100) & 1) ? x - 5 : x;
    printf("Result=%d", y);
}