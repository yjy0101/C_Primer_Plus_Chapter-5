/*post_pre.c--ǰ׺�ͺ�׺*/
//��׺��ʹ��a��ֵ֮�󣬵���a
//ǰ׺��ʹ��b��ֵ֮ǰ������b
#include<stdio.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++;	//��׺������a++��ʾ��ʹ��a���ٶ�a����1			//�ɶ��Բ��ã�������д
	pre_b = ++b;	//ǰ׺������++b��ʾ�ȶ�b+1����ʹ��b
	printf("a  a_post   b   pre_b\n");
	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

	return 0;
}
/*
a  a_post   b   pre_b
2     1     2     2
*/