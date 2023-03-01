#include<stdio.h>
int main(void)
{
	int ultra = 0, super = 0;

	while (super < 5)
	{
		super++;		//等价于super = super+1
		++ultra;		//等价于ultra = ultra+1
		printf("super = %d, ultra = %d \n", super, ultra);
	}

	return 0;
}
/*
super = 1, ultra = 1
super = 2, ultra = 2
super = 3, ultra = 3
super = 4, ultra = 4
super = 5, ultra = 5
*/