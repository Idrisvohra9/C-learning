#include <stdio.h>
int main()
{
    int x, s, num = 1;
    for (x = 1; x <= 4; x++)
    {
        for (s = 1; s <= x; s++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}