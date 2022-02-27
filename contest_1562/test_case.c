#include<stdio.h>

int main()
{
    printf("%d\n", 1275);
    for(int i1 = 1; i1 <= 50; i1++)
    {
        for(int i2 = i1; i2 <= 50; i2++)
        {
            printf("%d  %d\n", i1, i2);
        }
    }
}