#include<stdio.h>
int main(void)
{
	char ch;
	int i;
	float fl;

	fl = i = ch = 'C';
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch = ch + 1;
	i = fl + 2 * ch;
	fl = 2.0 * ch + i;
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch = 1107;
	printf("Now ch = %c\n", ch);		//ch��ֵ��1107%256��2��8�η��� = 83		83 = 'S'
	ch = 80.89;
	printf("Now ch = %c\n", ch);		//��ch����Ϊһ���������������ضϺ�ch��ֵ��80����P��ASCII��

	return 0;
}
/*
ch = C, i = 67, fl = 67.00
ch = D, i = 203, fl = 339.00
Now ch = S
Now ch = P
*/
/*
ǿ������ת���������cast operator��:
								  (type)

								  mice = 1.6 +1.7;					3.3
								  mice = (int)1.6 +(int)1.7;		2

*/