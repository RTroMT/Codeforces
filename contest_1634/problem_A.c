// https://codeforces.com/contest/1634/problem/A

#include <stdio.h>
#include <conio.h>
#include <string.h>

int check(int n, int k, char str[])
{
    int bd1 = 0;
    char str_rev[101] = {0};
    for (int i = (n - 1); i >= 0; i--) // Create a reverse string.
    {
        str_rev[bd1] = str[i];
        bd1++;
    }
    /*if (strcmp(str, str_rev) == 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }*/
    // int result = (strcmp(str, str_rev) == 0) ? 1 : 2;
    return (strcmp(str, str_rev) ? 1 : 2);
}

int sum(int a, int b)
{
    // int result = a + b;
    return (a + b);
}

int main()
{
    int test_case = 0;
    int length, op, result = 0;
    char str[101] = {0};
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        strcpy(str, "");
        result = 0;
        scanf("%d", &length);
        scanf("%d", &op);
        scanf("%s", &str);
        char str_rev[100] = {0};
        /* int bd1 = 0;
         for (int i2 = (length - 1); i2 >= 0; i2--)
         {
             str_rev[bd1] = str[i2];
             bd1++;
         }
         printf("%s", &str_rev);
         */
        if (op == 0)
        {
            printf("1\n");
        }
        else
        {
            result = check(length, op, str);
            printf("%d\n", result);
        }
    }
    return 0;
}