#include <stdio.h>
int main()
{
    int x, count = 0;
    printf("Enter number: ");
    scanf("%d", &x);
    for (; x > 0; x /= 10)
        count++;
    printf("%d", count);
}