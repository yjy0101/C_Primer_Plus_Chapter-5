#include<stdio.h>
int main(void)
{
	typedef double yjy;		//��typedef������yjy�ѳ�Ϊdouble�ı���
	int n = 0;
	yjy number;
	size_t intsize;		//����һ���޷����������ͣ��������������� 
	number = 3.14;

	intsize = sizeof(int);		//���ֽ�Ϊ��λ�ģ����ͣ���ֵ
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof(n), intsize);
	printf("number = %f", number);

	return 0;
}
/*
n = 0, n has 4 bytes; all ints have 4 bytes.
number = 3.140000
*/