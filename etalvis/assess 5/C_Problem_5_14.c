#include <stdio.h>
int main()
{
    int x, y, ref = 1;
    printf("Enter number: ");
    scanf("%d", &x);
    for (y = x; y > 0; y /= 10)
        ref *= 10;
    ref /= 10;
    x = x / ref + (x % ref / 10) * 10 + (x % 10) * ref;
    printf("%d", x);
}