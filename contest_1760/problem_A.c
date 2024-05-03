// https://codeforces.com/contest/1760/problem/A

// Make two simple comparision or use a organisation algorithm 
#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int t = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%D\n", &c);
        if(a > b)
        {
            if (a > c)
            {
                if(b > c)
                {
                    printf("%d\n", b);
                }
                else
                {
                    printf("%d\n", c);
                }
            }
            else
            {
                printf("%d\n", a);
            }
        }
        else
        {
            if(a > c)
            {
                printf("%d\n", a);
            }
            else
            {
                if(b > c)
                {
                    printf("%d\n", c);
                }
                else{
                    printf("%d\n", b);
                }
            }
        }
    }
    return 0;
}