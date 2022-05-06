#include<stdio.h>

int main30(void)
{
	//while(表达式)
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		//条件控制语句
		i++;
	}
	return 0;
}

int main40()
{
	int i = 1;
	while (i <= 100)
	{
		//输出偶数
		//添加条件约束
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}

int main400(void)
{
	//敲桌子，数数只要有7 的倍数的，各位带 7的，十位带7的，数都说敲桌子
	//循环打印1-99
	//条件约束 要满足 n % 7 = 0;  n  % 10 = 7; n / 10 = 7;

	int n = 1;
	while (n < 100)
	{
		if (n % 7 == 0 || n % 10 == 7 || n / 10 == 7)
		{
			printf("敲桌子\n");
		}
		else
		{
			printf("%d\n", n);
		}
		n++;
	}

	return 0;
}