//JUNGOL 비기너_숫자사각형3

#include <stdio.h>

int main()
{
	int i, j, n;
	int flag = 0, count = 0;

	scanf("%d", &n);
	if (n > 0 || n < 100)
	{
		for (i = 0; i < n; i++)
		{
			count++;
			for (j = 0; j < n; j++)
			{
				printf("%d ", (n * j) + count);
			}
			printf("\n");
		}
		
	}
	return 0;
}