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
	printf("Now ch = %c\n", ch);		//ch的值是1107%256（2的8次方） = 83		83 = 'S'
	ch = 80.89;
	printf("Now ch = %c\n", ch);		//把ch设置为一个浮点数，发生截断后，ch的值是80，即P的ASCII码

	return 0;
}
/*
ch = C, i = 67, fl = 67.00
ch = D, i = 203, fl = 339.00
Now ch = S
Now ch = P
*/
/*
强制类型转换运算符（cast operator）:
								  (type)

								  mice = 1.6 +1.7;					3.3
								  mice = (int)1.6 +(int)1.7;		2

*/