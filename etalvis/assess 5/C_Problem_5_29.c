#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    for (int a = x; x % y != 0 || x % z != 0; x += a)
        ;
    printf("%d", x);
}