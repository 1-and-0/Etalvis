#include <stdio.h>
int main()
{
    int x, check = 2;
    printf("Enter number: ");
    scanf("%d", &x);
loop:
    if (check < x / 2)
    {
        if (x % check == 0)
        {
            printf("Not Prime");
            return 0;
        }
        check++;
        goto loop;
    }
    printf("Prime");
}