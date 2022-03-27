// https://codeforces.com/contest/1647/problem/A

/*
*/
#include <stdio.h>

int main()
{
    int t = 0, n = 0;
    int bd = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if(n == 1)
        {
            printf("1");
            printf("\n");
        }
        else if(n == 2)
        {
            printf("2");
            printf("\n");
        }
        else
        { 
            if(n % 3 == 0)
            {
                for(int i2 = 0; i2 < (n / 3); i2++)
                {
                    printf("21");
                    
                }
                printf("\n");
            }
            else
            {
                if(n % 3 == 2)
                {    
                    printf("2");
                    for(int i3 = 0; i3 < (n/3); i3++)
                    {
                        printf("12");
                    }
                    printf("\n");
                }
                else
                {
                     printf("1");
                     for(int i4 = 0; i4 < (n/3); i4++)
                     {
                        printf("21");
                     }
                     printf("\n");
                }     
            }
        }
    }
    return 0;
}