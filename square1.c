//JUNGOL 비기너_숫자사각형1

#include <stdio.h>

int main()
{
	int n, m;
	int i, j;
	int count = 1, flag = 0;

	do {
		if (flag == 1) printf("INPUT ERROR!\n");
		scanf("%d %d", &n, &m);
		flag = 1;
	} while ((n < 0 || n > 100) || (m < 0 || m > 100));

	for (i = 0; i < n; i++) {	//행
		for (j = 0; j < m; j++) {	//열
			printf("%d ", count++);
		}
		printf("\n");
	}
	return 0;
}
