#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float h, w, bmi;
	printf("�Ш̧ǿ�J����(m)���魫(kg):");
	scanf_s("%f%f", &h, &w);
	bmi = w / h / h;

	if (bmi < 18.5)
	{
		printf("bmi=%f, underweight",bmi);
	}
	if (18.5 <= bmi && bmi <= 24.9)
	{
		printf("bmi=%f, normal",bmi);
	}
	if (25 <= bmi && bmi <= 29.9)
	{
		printf("bmi=%f, overweight", bmi);
	}
	if (30 < bmi)
	{
		printf("bmi=%f, obese", bmi);
	}
	system("pause");
	return 0;
	
}