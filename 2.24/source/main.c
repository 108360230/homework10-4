#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a;
	printf("�п�J�@�Ӽ�:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf(" %d ������", a);
	}
	else
	{
		printf(" %d �����", a);
	}
	system("pause");
	return 0;
}