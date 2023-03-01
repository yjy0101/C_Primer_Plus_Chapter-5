#include<stdio.h>
#define MAX 100
int main(void)
{
	int cout = MAX + 1;

	while (--cout > 0)
	{
		printf("%d bottles of spring water on the wall, %d bottles of spring water!\n", cout, cout);
		printf("Take one down and pass it around,\n");
		printf("%d bottles of spring water!\n\n", cout - 1);
	}

	return 0;
}
/*
100 bottles of spring water on the wall, 100 bottles of spring water!
Take one down and pass it around,
99 bottles of spring water!

99 bottles of spring water on the wall, 99 bottles of spring water!
Take one down and pass it around,
98 bottles of spring water!
...
1 bottles of spring water on the wall, 1 bottles of spring water!
Take one down and pass it around,
0 bottles of spring water!
*/