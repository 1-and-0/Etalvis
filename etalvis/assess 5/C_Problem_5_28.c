#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    for (int z = x; x % y != 0; x += z)
        ;
    printf("%d", x);
}