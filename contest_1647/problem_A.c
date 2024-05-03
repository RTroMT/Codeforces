// https://codeforces.com/contest/1647/problem/A

/*
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char result[1000] = {0};
    int t = 0, n = 0;
    int bd = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        char *p = result;
        memset(result, 0, 1000);
        bd = 0;
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
                    // printf("21");
                    *p++ = '2';
                    *p++ = '1';
                }
                printf("%s", result);
                printf("\n");

            }
            else
            {
                if(n % 3 == 2)
                {   
 
                    result[bd] = '2'; bd++;
                    for(int i3 = 0; i3 < (n/3); i3++)
                    {
                        // printf("12");
                        *p++ = '1';

                        *p++ = '2';

                    }
                    printf("%s", result);
                    printf("\n");
                }
                else
                {
 
                    result[bd] = '1'; bd++;
                    for(int i4 = 0; i4 < (n/3); i4++)
                     {
                        // printf("21");
                        *p++ = '2';
                
                        *p++ = '1';

                     }
                     printf("%s", result);
                    printf("\n");
                }     
            }
        }
    }
    return 0;
}