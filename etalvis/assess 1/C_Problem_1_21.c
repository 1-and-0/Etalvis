#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter number: ");
    scanf("%d", &x);
    y = x % 2 ? x - 5 : x;
    printf("Result=%d", y);
}