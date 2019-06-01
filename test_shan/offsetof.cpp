#include<stdio.h>
#include<stdlib.h>
//#define offsetof(s, i) (size_t)&( ((s*)0)->i )
int main3()
{
	struct S1
	{
		char c1;
		int i;
		char c2;
	}s;

	printf("%d", offsetof(struct S1,c2));
	system("pause");
	return 0;
}