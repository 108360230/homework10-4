#include <stdio.h>
#include <stdlib.h>




int main(void)
{	
	int a, b, c;
	printf("叫块计:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("程计: %d \n",a);
		if(b>c)
		{
			printf("程计: %d \n", c);
		}
		else
		{
			printf("程计: %d \n", b);
		}
	}
	if (b > a && b > c)
	{
		printf("程计: %d \n", b);
		if (a > c)
		{
			printf("程计: %d \n", c);
		}
		else
		{
			printf("程计: %d \n", a);
		}
	}
	if (c > b && c > a)
	{
		printf("程计: %d \n", c);
		if (b > a)
		{
			printf("程计: %d \n", a);
		}
		else
		{
			printf("程计: %d \n", b);
		}
	}

	return 0;
	system("pause");


}