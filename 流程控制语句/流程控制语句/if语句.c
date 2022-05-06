#include<stdio.h>
//#define  _CRT_SECURE_NO_WARNINGS

int main003(void)
{
	int score;
	scanf_s("%d", &score);
	if (score > 700)
	{
		printf("我要拿大奖");
	}
	else 
	{
		printf("拿不了奖了");
	}

	
	return 0;
}