// https://codeforces.com/contest/1607/problem/A

/*\
- Cho n là độ dài xâu cần nhập
- Lưu tất cả các chỉ số của các kí tự trong xâu cần nhập vào một mảng
- Làm việc với mảng đó:
+ So sánh a2 vs a1, rồi tính hiệu 2 số (kết quả phải dương)
+ Tương tự cho đến a(n) và a(n-1)
- Đưa ra kết quả là tổng các hiệu.
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int t = 0;
    // printf("Nhap test case: ");
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char keyboard[27] = {0};
        char input[100] = {0};
        int index[100] = {0};
        int key[129] = {0};
        // printf("\nNhap bang chu cai 26 ki tu: ");
        scanf("%s", keyboard);
        for (int n = 0; n < 26; n++)
        {
            key[keyboard[n]] = n + 1;
        }
        // printf("\nNhap xau can go: ");
        scanf("%s", input);
        int length = strlen(input);
        int array[length];
        for (int i1 = 0; i1 < length; i1++)
        {
            array[i1] = key[input[i1]];
        }
        int time = 0;
        for (int i1 = 0; i1 < (length - 1); i1++)
        {
            if (array[i1] < array[i1 + 1])
            {
                time = time + (array[i1 + 1] - array[i1]);
            }
            else
            {
                time = time + (array[i1] - array[i1 + 1]);
            }
        }
        printf("%d\n", time);
    }
}