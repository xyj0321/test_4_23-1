#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	
//	//char;  //'a'
//	//short; //
//	//int;
//	//long;
//	//long long;
//	//float;
//	//double;
//	int a = 10;//整型向内存申请4个空间,单位字节，用来存放10
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//在{}内是局部变量，局部变量的作用域在局部范围内
//在{}外部是全局变量，全局变量的作用域在整个工程

//int main()
//{
//	extern b;//extern声明外部函数
//	int a = 20; 
//	printf("%d\n", a);
//	printf("%d\n", b);
//}
//常量：字面常量，const修饰的常变量；#define定义的标识符常量；枚举常量；
#define ROW 9

//int main()
//{
//	3.14;
//	const int a = 10;
//	/*char arr[a] = { 0 };*/
//	//(const char*arr)
//	int row = ROW;
//	enum Sex
//	{
//		MALE,
//		FEMALE,
//		secret
//	};
//	
//		//""空字符串
//		char arr1[] = "bit";//
//		char arr2[] = { 'b', 'i', 't' };
//		printf("%d\n", sizeof(arr1));
//		printf("%d\n", sizeof(arr2));
//		printf("%d\n", strlen(arr1));
//		printf("%d\n", strlen(arr2));
//	printf("%d %d %d\n", MALE,FEMALE,secret);
//	printf("\32");
//	printf("%c\n", 49);
//
//	return 0;
//}

//int main()
//{
//	int choose= 0;
//	printf("加入比特,你要好好学习吗？（1/0）:>");
//	scanf("%d",&choose);
//	if (choose == 1)
//	{
//		printf("好好学习,得到好offer\n");
//	}
//	else
//	{
//		printf("回家买红薯\n");
//	}
//	return 0;
//}
int main()
{
	int n = 0;
	printf("加入比特");
	scanf("%d", n);
	int line = 0;
	int count = 1;
	while (line <100)
	{
			printf("敲代码");
			printf("%d\n", count);
			line++;
			count++;
	}
	if (line > 100)		{
		printf("拿到好offer");
	}		
	return 0;
}