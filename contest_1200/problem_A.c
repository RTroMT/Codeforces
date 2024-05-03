// https://codeforces.com/contest/1200

/*
- Create a array holding integer from 0 to 9 as the number of rooms.
- Each "L" or "R" will fill 1 from left(or right).
- Each number n will reset the value of arr[n] to zero.
- Fill in will start in the first empty room; and go on. 
*/


#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int n = 0;
    int room[10] = {0};
    int *ptrL = {0};
    int *ptrR = {0};
    char event[100000] = {0};
    char *ptrChar = {0};
    scanf("%d", &n);
    scanf("%s", event);
    ptrL = &room[0];
    ptrR = &room[9];
    for (int i = 0; i < n; i++)
    {
        ptrChar = &event[i];
        if(event[i] == 'L')
        {
            ptrL = &room[0];
            while(*ptrL != 0)
            {
                ptrL++;
            }
            *ptrL = 1;
        }
        else if(event[i] == 'R')
        {
            ptrR = &room[9];
            while(*ptrR != 0)
            {
                ptrR--;
            }
            *ptrR = 1;
        }
        else
        {
            room[event[i] - 48] = 0;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d", room[i]);
    }
    return 0;
}