//JUNGOL ����_���ڻ簢��2

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

	for (i = 0; i < n; i++)		//i :��
	{
		if (i % 2 == 0) 
		{
			count = (i * m) + 1;	//¦���� i0, i2
			for (j = 0; j < m; j++)
			{	//��
				printf("%d ", count++);
			}
		}
		else
		{
			count = (i + 1) * m;
			for (j = 0; j < m; j++)		//Ȧ���� i1, i3		//j :��
			{	//��
				printf("%d ", count--);
			}
			
		}
		printf("\n");
	}
	return 0;
}

