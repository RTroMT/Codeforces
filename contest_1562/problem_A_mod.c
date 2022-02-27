#include <stdio.h>
#include <math.h>


// 

int main()
{
    int test_case = 0;
    int r = 0, l = 0;
    int  biggest = 0;
    scanf("%d",&test_case);
    for(int i = 1; i <= test_case; i++)
    {
        biggest = 0;
        scanf("%d",&l);
        scanf("%d",&r);
        for(int a = l; a < r; a++)
        {
            for(int b = r; b >= a; b--)
            {
                if((b % a) > biggest)
                {
                    biggest = (b % a);
                }
            }
        }
        printf("%d\n", biggest);
    }
    return 0;
}