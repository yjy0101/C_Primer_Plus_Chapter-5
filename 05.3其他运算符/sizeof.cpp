#include<stdio.h>
int main(void)
{
	typedef double yjy;		//在typedef声明中yjy已成为double的别名
	int n = 0;
	yjy number;
	size_t intsize;		//这是一个无符号整数类型，但它不是新类型 
	number = 3.14;

	intsize = sizeof(int);		//以字节为单位的（整型）的值
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof(n), intsize);
	printf("number = %f", number);

	return 0;
}
/*
n = 0, n has 4 bytes; all ints have 4 bytes.
number = 3.140000
*/