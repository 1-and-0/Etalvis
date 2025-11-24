#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter number: ");
    scanf("%d", &x);
    if (x % 11 == 0)
        printf("Success");
    else
        printf("Failure");
}