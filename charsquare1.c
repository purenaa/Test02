//JUNGOL 비기너_문자사각형1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    int start_num, print_num;
    scanf("%d", &n);

    start_num = n * n - 1;
    for (int i = 0; i < n; i++)
    {
        print_num = start_num;
        for (int j = 0; j < n; j++)
        {
            printf("%c ", print_num % 26 + 65);
            //printf("%d ", print_num);
            print_num -= n;
        }
        start_num--;
        putchar('\n');
    }
    return 0;
}