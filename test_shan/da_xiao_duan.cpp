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
		printf("С��\n");
	else
		printf("���\n");
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
	////char ��-1��8��1 ���int �з���ʱ����������������λ������24��1�������-1
	////signed char ���з��� ����1111 1111 �������һ��
	////unsigned char ���Ƚ��нضϣ�1111 1111 ���ʱ�������� �޷��� ��ô��24��0
	////���255
	//printf("%x,%x,%x\n", a, b, c);
	//printf("%u,%u,%u\n", a, b, c);
	//����޷�������ʱ�����λ���ܵ�������λ��������ͨ��λ
	//char a = -128;
	//char b = 128;
	////128 1000 0000
	////-128 11111111 11111111 11111111 11111111 11111111 11111111 11111111 10000000
	////���Ƚضϣ�����1000 0000���޷��Ų�24��0?
	//printf("%u,%u\n", a, b);
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j );
	system("pause");
	return 0;
}