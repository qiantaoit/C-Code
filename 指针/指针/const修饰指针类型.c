#include<stdio.h>

int main31(void)
{
	//���� �����ֵ�Ͳ��ᷢ���ı���
	const int a = 10;
	//ָ�����޸ĳ���ֵ
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

	//���Ըı��ڴ��ַΪ&a��ֵ
	p = &b;
	//*p = 100;//error�������޸�*p��ֵ
	printf("%d\n", *p);
	return 0;
}

int main33(void)
{
	int a = 10;
	int b = 20;
	int* const p = &a;//const����ָ�����
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

	//����ʹ�ö���ָ�����һ��ָ���ֵ

	//�ı��� p��ֵ����ַ��
	int** pp = &p;//����ָ��ı����� &p
	*pp = &b;//����޸� һ��ָ�� ���� p�ĵ�ַ
	//pp�Ƕ���ָ��
	//*pp ��ά�� һ��ָ��
	//**pp ��ά�� ָ���ڴ��ַ��ֵ
	printf("%d\n", *p);
	printf("%d\n", a);


	//�ı�*p��ֵ����ַ�洢�����ݣ�
	**pp = 100;
	printf("%d\n", *p);
	
	
	//ע�⣺����ָ���޸�һ��ָ�볣��������ı�ԭ����
	//ָ��ı���/���� �ǵ�ַ  int* p = &a; &aȡ��ַ����
}