/*post_pre.c--前缀和后缀*/
//后缀：使用a的值之后，递增a
//前缀：使用b的值之前，递增b
#include<stdio.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++;	//后缀递增，a++表示先使用a，再对a，加1			//可读性不好，不这样写
	pre_b = ++b;	//前缀递增，++b表示先对b+1，在使用b
	printf("a  a_post   b   pre_b\n");
	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

	return 0;
}
/*
a  a_post   b   pre_b
2     1     2     2
*/