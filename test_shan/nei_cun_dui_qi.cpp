#include<stdio.h>
#include<stdlib.h>
int main5()
{
	struct S1
	{
		char c1;
		int i;
		char c2;
	};
	printf("%d\n", sizeof(struct S1));//12
	//��ϰ2
	struct S2
	{
		char c1;
		char c2;
		int i;//8
	};
	printf("%d\n", sizeof(struct S2));
	//��ϰ3
	struct S3
	{
		double d;
		char c;
		int i;
	};
	printf("%d\n", sizeof(struct S3));//16
	//��ϰ4-�ṹ��Ƕ������
	struct S4
	{
		char c1;//1
		struct S3 s3;//8,
		double d;//24+8
	};
#pragma pack(8)//����Ĭ�϶�����Ϊ8
	struct S5
	{
		char c1;
		int i;
		char c2;
	};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
#pragma pack(1)//����Ĭ�϶�����Ϊ1
	struct S6
	{
		int c1;
		double i;
		char c2;
	};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
	
		//����Ľ����ʲô��
		printf("%d\n", sizeof(struct S1));
		printf("%d\n", sizeof(struct S5));
	    printf("%d\n", sizeof(struct S6));//32
	system("pause");
	return 0;
}