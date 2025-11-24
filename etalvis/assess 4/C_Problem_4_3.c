#include <stdio.h>
int main()
{
    int x = 1, sum = 0;
loop:
    if (x < 6)
    {
        sum += x++;
        goto loop;
    }
    printf("%d", sum);
}