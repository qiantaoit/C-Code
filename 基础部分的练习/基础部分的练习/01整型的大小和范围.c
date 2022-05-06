#include<stdio.h>

int main01(void)
{
	//整型变量
	int a = 10;  //空间4字节
	
	//短整型
	short b = 20; //2字节
	//长整型
	long c = 30; //win4字节
	//长长整型
	long long d = 40;  // longlong8字节

	//占位符 %h 表示输出一个整型
	printf("%d\n", a);

	//占位符 %h 表示输出一个短整型
	printf("%hd\n", b);

	//占位符 %h 表示输出一个长整型
	printf("%ld\n", c);

	//占位符 %h 表示输出一个长长整型
	printf("%lld\n", d);

	 a = printf("整型：%d\n", sizeof(a));
	 b = printf("短整型：%d\n", sizeof(b));
	 c = printf("长整型：%d\n", sizeof(c));
	 d = printf("长长整型：%d\n", sizeof(d));
	

	return 0;
}