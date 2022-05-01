 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int digitsum(int x)
//{
//	if (x == 1)
//		return 1;
//	else
//		return digitsum(x - 1) + x;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = digitsum(n);
//	printf("%d\n", sum);
//	return 0;
//}
//int fac(int x)
//{
//	if (x == 1)
//		return 1;
//	else
//		return fac(x - 1) * x;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	//100000000000000000000000010100 - i - 原码
//	//111111111111111111111111101011 - 反码
//	//111111111111111111111111101100- 补码
//	unsigned int j = 10;
//	//000000000000000000000000001010 - 补码
//	//111111111111111111111111110110 - 结果 - 补码
//	//111111111111111111111111110101 - 反码
//	//100000000000000000000000001010 - 原码 - （-10）
//	printf("%d\n", i + j);
//	return 0;
//}
//
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//i不可能为负
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];//char | -128 -> 127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}
//unsigned char i = 0;//0-255
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//		
//	}
//	printf("%d\n", count);
//	return 0;
//}***********************************浮点型在内存中的存储***********************************
//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001 - 补码
//	//0 00000000 00000000000000000001001
//	float* pFloat = (float*)&n;//0.000000
//	//(-1)^0*0.00000000000000000001001 * 2^-126
//	//
//	printf("n=%d\n", n);//9
//	printf("*pFloat:%f\n", *pFloat);
//	*pFloat = 9.0;
//	//1001.0
//	//1.001 * 2^3
//	//(-1)^0 * 1.001 * 2^3 
//	//0 10000010 00100000000000000000000 - 补码
//	//01000001000100000000000000000000
//	printf("num的值为:%d\n", n);
//	printf("*pFloat=%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	return 0;
// }
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(i=1;i<=9;i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//***********************************指针的进阶**********************************************
//void test(int arr[])
//{
//	
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串
//	printf("%s\n", p);
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//指针数组  是数组,用来存放指针的
//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//数组指针 -- 指针
//int main()
//{
	//int* p = NULL;  //整形指针 - 指向整型的指针 - 可以存放整形的地址
	//char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
	//                //数组指针 - 指向数组的指针 - 可以存放数组的地址
	//int arr[10] = { 0 };
	//arr - 首元素地址
	//&arr[0] - 首元素地址
	//&arr - 数组的地址
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int (*p)[10] = &arr;//数组地址存起来
	//上面的p就是数组指针
	
	//return 0;
//}
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));//*pa == arr
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}//参数是数组的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			
//			//printf("%d ", *(*(p + i) + j));
//			/*printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);*/
//			//printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}//参数是指针的形式
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);// arr - 数组名 - 首元素地址
//	print2(arr, 3, 5);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		/*printf("%d ", *(p + i));//p是首元素的地址 i产生下标为i的地址
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);*///arr[i] == *(arr+i) == *(p+i) == p[i]
//		printf("%d ", p[i]);
//	}
//}
//int arr[5] //arr是一个五个元素的整型数组
//int *parr1[10] //parr1是一个数组，数组有十个元素，每个元素的类型是int *，parr1是一个指针数组
//int (*parr)[10] 
//parr2是一个指针，该指针指向了一个数组，数组有十个元素，每个元素的类型是int - parr2是数组指针
//int (*parr3[10])[5]
//parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指向的数组有五个元素，每个元素是int