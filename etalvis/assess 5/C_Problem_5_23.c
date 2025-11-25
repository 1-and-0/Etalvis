#include <stdio.h>
int main()
{
    int x, count = 0;
    printf("Enter number: ");
    scanf("%d", &x);
    for (; x > 0; x /= 10)
        if (x % 10 == 1 || x % 10 == 4 || x % 10 == 9)
            count++;
    printf("%d", count);
}