//JUNGOL 비기너_숫자사각형3     //교수님버전

#include <stdio.h>

int main()
{
    int n, n2, i, j, flag = 0;

    do {
        if (flag == 1) printf("INPUT ERROR!\n");
        scanf("%d", &n);
        flag = 1;
    } while ((n < 0 || n > 100));

    for (i = 1, n2 = n * n; i <= n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c ", 'A' + (n2 - (i + n * j)) % 26);
            //printf("%d", n2 % 26);
        }
        printf("\n");
    }

    return 0;
}
