#include<stdio.h>

int main30(void)
{
	//while(���ʽ)
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		//�����������
		i++;
	}
	return 0;
}

int main40()
{
	int i = 1;
	while (i <= 100)
	{
		//���ż��
		//�������Լ��
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
	//�����ӣ�����ֻҪ��7 �ı����ģ���λ�� 7�ģ�ʮλ��7�ģ�����˵������
	//ѭ����ӡ1-99
	//����Լ�� Ҫ���� n % 7 = 0;  n  % 10 = 7; n / 10 = 7;

	int n = 1;
	while (n < 100)
	{
		if (n % 7 == 0 || n % 10 == 7 || n / 10 == 7)
		{
			printf("������\n");
		}
		else
		{
			printf("%d\n", n);
		}
		n++;
	}

	return 0;
}