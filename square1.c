//JUNGOL ����_���ڻ簢��1

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

	for (i = 0; i < n; i++) {	//��
		for (j = 0; j < m; j++) {	//��
			printf("%d ", count++);
		}
		printf("\n");
	}
	return 0;
}
