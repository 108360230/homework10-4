#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a,b;
	printf("�п�J��Ӿ��:");
	scanf_s("%d%d" , &a, &b);
	if (a % b == 0)
	{
		printf("%d �� %d ������", a, b);
	}
	else
	{
		printf("%d ���� %d ������", a, b);
	}

}