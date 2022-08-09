//JUNGOL 비기너_도형_구구단 
//원하는 구구단의 범위를 입력받아 해당 구간의 구구단을 출력하는 프로그램을 작성하시오.
//<처리조건>
//(1) 구간의 처음과 끝을 입력받는다.
//(2) 입력된 구간은 반드시 처음 입력 값이 끝의 입력 값보다 작아야 하는 것은 아니다.
//즉 입력된 구간의 범위는 증가하거나 감소하는 순서 그대로 출력되어야 한다.​

#include <stdio.h>

int main() {

	int s, e;
	int i, j;

	while (1) {
		printf("구구단 : 두 정수를 입력하시오. (2~9)");
		scanf_s("%d %d", &s, &e);
		if ((s<2 || s>9) || (e<2 || e>9)) {
			printf("INPUT ERROR!\n");
			continue;
		}
		else {
			if (s > e)
			{
				for (j = 1; j <= 9; j++)
				{
					for (i = s; i >= e; i--)
					{
						printf("%d * %d = %2d  ", i, j, i * j);
					}
					printf("\n");
				}
			}
			else if (s < e)
			{
				for (j = 1; j <= 9; j++)
				{
					for (i = s; i <= e; i++)
					{
						printf("%d * %d = %2d  ", i, j, i * j);
					}
					printf("\n");
				}
			}
		}
	}
	return 0;
}
