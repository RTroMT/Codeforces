// https://codeforces.com/contest/1720/problem/A

// Possible clap(s): {0; 1; 2}
// Using diagonal multiplication X1, X2 to calculate the result
// In case: + X1 = X2 ==> clap = 0
//          + X1 mod X2 == 0 or otherwise ==> clap = 1
//          + X1 mod X2 != 0 (or otherwise) ==> claps = 2


// Fixing: X1, X2 to unsighned long int

#include <stdio.h>
#include <math.h>

int main()
{
    int t = 0, clap = 0;
    int X1 = 0, X2 = 0;
    int a = 0, b= 0, c = 0, d = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        clap = 0;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        X1 = a * d;
        X2 = b * c;
        if(X1 == X2)
        {
            clap = 0;
            printf("%d", clap);
        }
        else if(X1 == 0 || X2 == 0)
        {
            clap = 1;
            printf("%d", clap);
        }
        else if(X1 % X2 == 0)
        {
            clap = 1;
            printf("%d", clap);
        }
        else
        {
            clap = 2;
            printf("%d", clap);
        }
    }
    return 0;
}