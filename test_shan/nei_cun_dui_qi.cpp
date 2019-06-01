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
	//练习2
	struct S2
	{
		char c1;
		char c2;
		int i;//8
	};
	printf("%d\n", sizeof(struct S2));
	//练习3
	struct S3
	{
		double d;
		char c;
		int i;
	};
	printf("%d\n", sizeof(struct S3));//16
	//练习4-结构体嵌套问题
	struct S4
	{
		char c1;//1
		struct S3 s3;//8,
		double d;//24+8
	};
#pragma pack(8)//设置默认对齐数为8
	struct S5
	{
		char c1;
		int i;
		char c2;
	};
#pragma pack()//取消设置的默认对齐数，还原为默认
#pragma pack(1)//设置默认对齐数为1
	struct S6
	{
		int c1;
		double i;
		char c2;
	};
#pragma pack()//取消设置的默认对齐数，还原为默认
	
		//输出的结果是什么？
		printf("%d\n", sizeof(struct S1));
		printf("%d\n", sizeof(struct S5));
	    printf("%d\n", sizeof(struct S6));//32
	system("pause");
	return 0;
}