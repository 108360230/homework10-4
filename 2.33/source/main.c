#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{	
	float a, b, c, d, e, t ;
	printf("�Ш̧ǿ�J�U�C�ƭ�:\n(a) �@��Ѫ��`���{��\n(b) �T�o�@���� / �[�ڦh�ֿ�\n(c) �����@���� / �[�گ��p�h�֤���\n(d) �@�Ѫ������O\n(e) �@�Ѫ��q��O(�L���O)\n");
	scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &e);
	t = (a/c)*b+(d+e);
	printf("�@�Ѫ���O�O:%1.1f ��", t);
	
	system("pause");
	return 0;
}