//#include<stdio.h>
//#include<stdlib.h>
////贪心思想第一题，有一个包能装的重量为max，有n件等值但是重量不同的物品要求装下的物品数量最多
//void bubble(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; ++i)
//	{
//		for (j = 0; j < n - 1 - i; ++j)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//	}
//	for (i = 0; i < n; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	printf("请输入物品的数量\n");
//	int n = 0;//表示物品的数量
//	scanf("%d", &n);
//	printf("请输入背包的大小\n");
//	int max = 0;//背包的大小
//	scanf("%d", &max);
//	int arr[20] = { 0 };
//	printf("输入%d个物品的质量\n", max);
//	for (i = 0; i < n; ++i)
//	{
//		scanf("%d", arr + i);//键入物体的重量
//	}
//	bubble(arr, n);
//	printf("\n");
//	for (i = 0; sum + arr[i] < max && i < n; ++i)
//	{
//		sum += arr[i];
//	}
//	printf("%d ", i);
//	system("pause");
//	return 0;
//}
