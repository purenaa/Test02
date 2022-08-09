//구구단 교수님 버전

#include <stdio.h>

int main(int argc, char** argv)
{
    int s, e;
    int i, j;
    int flag = 0;

    do {
        if (flag == 1) printf("INPUT ERROR!\n");
        scanf("%d %d", &s, &e);
        flag = 1;
    } while ((s < 2 || s > 9) || (e < 2 || e > 9));

    for (j = 1; j < 10; j++) {
        if (s < e) {
            for (i = s; i <= e; i++) {
                printf("%d * %d = %2d   ", i, j, i * j);
            }
        }
        else {
            for (i = s; i >= e; i--) {
                printf("%d * %d = %2d   ", i, j, i * j);
            }
        }
        printf("\n");
    }

    return 0;
}