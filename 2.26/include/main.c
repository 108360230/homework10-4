#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a,b;
	printf("請輸入兩個整數:");
	scanf_s("%d%d" , &a, &b);
	if (a % b == 0)
	{
		printf("%d 為 %d 的倍數", a, b);
	}
	else
	{
		printf("%d 不為 %d 的倍數", a, b);
	}

}