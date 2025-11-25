#include <stdio.h>
int main()
{
    int x, ans;
    for (int x = 1000; x < 10000; x++)
        if (x % 7 == 0 && x % 9 == 0)
            ans = x;
    printf("%d", ans);
}