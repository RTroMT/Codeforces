#include <stdio.h>

// https://codeforces.com/contest/1328/problem/A

int main()
{
    int a = 0, b = 0;
    int t = 0, result = 0;
    scanf("%d", &t);
    for(int i1 = 0; i1 < t; i1++)
    {
        result = 0;
        scanf("%d", &a);
        scanf("%d", &b);
        while (a % b != 0)
        {
            a += 1;
            result += 1;
        }
        printf("%d\n", result);
    }   
    return 0;
}