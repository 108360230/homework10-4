#include <stdio.h>
#include <stdlib.h>




int main(void)
{	
	int a, b, c;
	printf("�п�J�T�Ӽ�:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("�̤j�ƭȬ�: %d \n",a);
		if(b>c)
		{
			printf("�̤p�ƭȬ�: %d \n", c);
		}
		else
		{
			printf("�̤p�ƭȬ�: %d \n", b);
		}
	}
	if (b > a && b > c)
	{
		printf("�̤j�ƭȬ�: %d \n", b);
		if (a > c)
		{
			printf("�̤p�ƭȬ�: %d \n", c);
		}
		else
		{
			printf("�̤p�ƭȬ�: %d \n", a);
		}
	}
	if (c > b && c > a)
	{
		printf("�̤j�ƭȬ�: %d \n", c);
		if (b > a)
		{
			printf("�̤p�ƭȬ�: %d \n", a);
		}
		else
		{
			printf("�̤p�ƭȬ�: %d \n", b);
		}
	}

	return 0;
	system("pause");


}