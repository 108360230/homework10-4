#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a;
	printf("請輸入一個數:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf(" %d 為偶數", a);
	}
	else
	{
		printf(" %d 為基數", a);
	}
	system("pause");
	return 0;
}