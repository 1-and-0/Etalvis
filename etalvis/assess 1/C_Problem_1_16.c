#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter number: ");
    scanf("%d", &x);
    y = (x / 1000) * 100 + ((x / 100) % 10) * 1000 + x % 100;
    printf("Result=%d", y);
}