#include <stdio.h>
int main()
{
    int x, y, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    for (int a = 1; a <= x && a <= y; a++)
        if (x % a == 0 && y % a == 0)
            hcf = a;
    printf("%d", hcf);
}