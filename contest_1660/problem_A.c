#include <stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);
    for (int test = 0; test < t; test++)
    {
        int a = 0;
        int b = 0;
        int result = 0;
        //printf("How many 1 burle coins do you have?\n");
        scanf("%d", &a);
        //printf("How many 2 burle coins do you have?\n");
        scanf("%d", &b);
        
        // Exception
        if(a == 0 & b == 0)
        {
            result = 1;
            printf("%d\n", result);
        }
        else if(b == 0)
        {
            result = a + 1;
            printf("%d\n", result);
        }
        else if(a == 0)
        {
            result = 1;
            printf("%d\n", result);
        }
        // End of exception
        else
        {
            result = a + 2*b + 1;
            printf("%d\n", result);
        }
    }
    return 0;
}