#include<stdio.h>
#include<stdlib.h>
#if 0
int check_sys()
{
	int i = 1;
	return (*(char *)&i);
}
int main()
{
	int ret = check_sys();

	if (1 == ret)
		printf("小端\n");
	else
		printf("大端\n");
	system("pause");
	return 0;
}
#endif
//00000000 00000000 00000000 10000000 128
int main1()
{
	/*unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}*/
	/*int i = 0x43c0e800;
	//printf("%.4f", *(float *)&i);*/
	//char a = -1;
	//signed char b = -1;
	//unsigned char c = -1;
	//printf("%d,%d,%d\n", a, b, c);
	////char 的-1是8个1 输出int 有符号时是整型提升补符号位，即补24个1，输出是-1
	////signed char 是有符号 还是1111 1111 和上面的一样
	////unsigned char 首先进行截断，1111 1111 输出时整型提升 无符号 那么补24个0
	////输出255
	//printf("%x,%x,%x\n", a, b, c);
	//printf("%u,%u,%u\n", a, b, c);
	//输出无符号整数时，最高位不能当做符号位，当成普通的位
	//char a = -128;
	//char b = 128;
	////128 1000 0000
	////-128 11111111 11111111 11111111 11111111 11111111 11111111 11111111 10000000
	////首先截断，都是1000 0000，无符号补24个0?
	//printf("%u,%u\n", a, b);
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j );
	system("pause");
	return 0;
}