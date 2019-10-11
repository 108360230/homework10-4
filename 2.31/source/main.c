#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	printf("number\t\square\t\cube\n");
	int i;
	for (i = 0; i<=10 ; i++)
	{
		int n = i;
		int s = i * i;
		int c = i * i * i;
		printf("%d\t\%d\t\%d \n", n, s, c);
	}
	
	system("pause");
	return 0;
}
