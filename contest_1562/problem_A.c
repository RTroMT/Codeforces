// https://codeforces.com/contest/1562/problem/A

/*
- To achieve the possible largest value of a mod b (a<b), we take b mod for:
. If b is odd, take integer result of (b/2) as the divider in (b mod divider).
. If b is even, take ((b/2)+1) as the divider in (b mod divider).
- Calculate the expression.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int test_case = 0;
    int a = 0, b = 0;
    int temp = 0, biggest = 0;
    scanf("%d",&test_case);
    for(int i = 1; i <= test_case; i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        temp = b - a;
        if((temp == 1) && (b % 2 != 0))
        {
            biggest = 1;
            printf("%d\n",biggest);
        }
        else if(b == a)
        {
            biggest = 0;
            printf("%d\n", biggest);
        }
        else if(temp % 2 == 0)
        {
            if(b % 2 == 0 && (b / 2) > a)
            {
                biggest = (b % ((b/2) + 1) );
                printf("%d\n", biggest);
            }
            else 
            {
                biggest = (b % ((b/2) + 1));
                printf("%d\n", biggest);
            };
        }
        else 
        {
            if(b % 2 == 0 )
            {
               if((b / 2) > a)
                  { 
                     biggest = (b % ( (b/2) + 1));
                     printf("%d\n", biggest);
                  }
               else 
                  {
                    biggest = b % a;
                    printf("%d\n", biggest);
                  };
            }
            else 
            {
                
                if((b / 2) > a)
               { 
                biggest = (b % ( (b/2) + 1));
                printf("%d\n", biggest);
               }
               else 
               {
                   biggest = b % (a + 1) ;
                   printf("%d\n", biggest);
               }
            }
        }
    }
}