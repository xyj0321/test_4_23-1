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
//	int a = 10;//�������ڴ�����4���ռ�,��λ�ֽڣ��������10
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//��{}���Ǿֲ��������ֲ��������������ھֲ���Χ��
//��{}�ⲿ��ȫ�ֱ�����ȫ�ֱ���������������������

//int main()
//{
//	extern b;//extern�����ⲿ����
//	int a = 20; 
//	printf("%d\n", a);
//	printf("%d\n", b);
//}
//���������泣����const���εĳ�������#define����ı�ʶ��������ö�ٳ�����
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
//		//""���ַ���
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
//	printf("�������,��Ҫ�ú�ѧϰ�𣿣�1/0��:>");
//	scanf("%d",&choose);
//	if (choose == 1)
//	{
//		printf("�ú�ѧϰ,�õ���offer\n");
//	}
//	else
//	{
//		printf("�ؼ������\n");
//	}
//	return 0;
//}
int main()
{
	int n = 0;
	printf("�������");
	scanf("%d", n);
	int line = 0;
	int count = 1;
	while (line <100)
	{
			printf("�ô���");
			printf("%d\n", count);
			line++;
			count++;
	}
	if (line > 100)		{
		printf("�õ���offer");
	}		
	return 0;
}