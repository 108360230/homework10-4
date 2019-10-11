#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{	
	float a, b, c, d, e, t ;
	printf("請依序輸入下列數值:\n(a) 一整天的總里程數\n(b) 汽油一公升 / 加侖多少錢\n(c) 平均一公升 / 加侖能行駛多少公里\n(d) 一天的停車費\n(e) 一天的通行費(過路費)\n");
	scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &e);
	t = (a/c)*b+(d+e);
	printf("一天的花費是:%1.1f 元", t);
	
	system("pause");
	return 0;
}