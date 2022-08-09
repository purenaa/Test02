//JUNGOL 비기너_숫자사각형2

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

	for (i = 0; i < n; i++)		//i :행
	{
		if (i % 2 == 0) 
		{
			count = (i * m) + 1;	//짝수행 i0, i2
			for (j = 0; j < m; j++)
			{	//열
				printf("%d ", count++);
			}
		}
		else
		{
			count = (i + 1) * m;
			for (j = 0; j < m; j++)		//홀수행 i1, i3		//j :열
			{	//열
				printf("%d ", count--);
			}
			
		}
		printf("\n");
	}
	return 0;
}

