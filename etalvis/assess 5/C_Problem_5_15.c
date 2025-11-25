#include <stdio.h>
int main()
{
    int x, ref = 1;
    printf("Enter number: ");
    scanf("%d", &x);
    if (x % 2)
    {
        for (int y = x; y > 0; y /= 10)
            ref *= 10;
        ref /= 10;
        x = ((x / ref) - 1) * ref + x % ref;
    }
    printf("%d", x);
}