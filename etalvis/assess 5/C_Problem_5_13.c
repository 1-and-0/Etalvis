#include <stdio.h>
int main()
{
    int x, rev=0;
    printf("Enter number: ");
    scanf("%d", &x);
    for (int y = x; y > 0; y /= 10)
        rev = 10 * rev + y % 10;
    printf("%d", rev);
}