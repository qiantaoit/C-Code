#include<stdio.h>

int main01(void)
{
	//���ͱ���
	int a = 10;  //�ռ�4�ֽ�
	
	//������
	short b = 20; //2�ֽ�
	//������
	long c = 30; //win4�ֽ�
	//��������
	long long d = 40;  // longlong8�ֽ�

	//ռλ�� %h ��ʾ���һ������
	printf("%d\n", a);

	//ռλ�� %h ��ʾ���һ��������
	printf("%hd\n", b);

	//ռλ�� %h ��ʾ���һ��������
	printf("%ld\n", c);

	//ռλ�� %h ��ʾ���һ����������
	printf("%lld\n", d);

	 a = printf("���ͣ�%d\n", sizeof(a));
	 b = printf("�����ͣ�%d\n", sizeof(b));
	 c = printf("�����ͣ�%d\n", sizeof(c));
	 d = printf("�������ͣ�%d\n", sizeof(d));
	

	return 0;
}