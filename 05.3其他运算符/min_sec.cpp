//min_sec.c--������ת���ɷֺ���
#include<stdio.h>
#define SEC_PER_MIN 60
int main(void)
{
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf_s("%d", &sec);				//��ȡ����
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;		//�ضϷ�����
		left = sec % SEC_PER_MIN;		//ʣ�µ�����		//%������������
		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf_s("%d", &sec);
	}

	printf("Done!\n");

	return 0;
}
/*
Convert seconds to minutes and seconds!
Enter the number of seconds (<=0 to quit):
154
154 seconds is 2 minutes, 34 seconds.
Enter next value (<=0 to quit):
567
567 seconds is 9 minutes, 27 seconds.
Enter next value (<=0 to quit):
0
Done!
*/