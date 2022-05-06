#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main45()
{
	
	//char ch;
	int a, b;
	//scanf("%c", &ch);  //接收后存到对于的空间中
	scanf("%d %d", &a, &b);
	//putchar(ch);putchar 输出一个 char 字符
	printf("%d %d",a, b);//printf 是输出一个字符串
	return 0;
}

int main(void)
{
	char ch;
	//接收键盘获取字符
	ch = getchar();
	putchar(ch);//打印字符

}