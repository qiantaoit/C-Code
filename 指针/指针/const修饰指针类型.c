#include<stdio.h>

int main31(void)
{
	//常量 定义的值就不会发生改变了
	const int a = 10;
	//指针简介修改常量值
	int* p = &a;
	*p = 100;

	printf("%d\n", a);
	return 0;
}

int main32(void)
{
	int a = 10;
	int b = 20;
	const int* p = &a;

	//可以改变内存地址为&a的值
	p = &b;
	//*p = 100;//error不可以修改*p的值
	printf("%d\n", *p);
	return 0;
}

int main33(void)
{
	int a = 10;
	int b = 20;
	int* const p = &a;//const修饰指针变量
	//p = &b;//err
	*p = 200;

	printf("%d\n", a);
	return 0;
}

int main34(void)
{
	int a = 10;
	int b = 20;
	const int* const p = &a;
	//p=&b;//err
	//*p = 100;//err

	//可以使用二级指针操作一级指针的值

	//改变了 p的值（地址）
	int** pp = &p;//二级指针的变量的 &p
	*pp = &b;//间接修改 一级指针 常量 p的地址
	//pp是二级指针
	//*pp 降维成 一级指针
	//**pp 降维成 指针内存地址的值
	printf("%d\n", *p);
	printf("%d\n", a);


	//改变*p的值（地址存储的内容）
	**pp = 100;
	printf("%d\n", *p);
	
	
	//注意：二级指针修改一级指针常量，不会改变原遍历
	//指针的变量/常量 是地址  int* p = &a; &a取地址符号
}