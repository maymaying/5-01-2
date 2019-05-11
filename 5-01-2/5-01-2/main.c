#define _CRT_SECURE_NO_WARNINGS 1
#include "5-01-2.h"

//test()
//{
//	return 100;//不写返回值，默认为int
//}

int main()
{
	//int x = 10;
	//int y = 30;
	//int z = Add(x, y);
	//printf("result: %d\n", z);


	//int z = 0;
	//z = test();

	
	//const char *str = "abcdef123456";
	//int len = MyStrlen(str);
	//printf("len = %d\n", len);//12
	

	//unsigned int x = 123456;
	//Print(x);
	
	
	//const char str[] = "1234abcd";
	//int len = MyStrlenOne(str);
	//printf("len = %d\n", len);


	//int result = Fact(30);
	//printf("result  = %d\n", result);
	//result = FactOne(30);
	//printf("result  = %d\n", result);


	//1 1 2 3 5 8 13 21 34
	int result = Fib(30);
	printf("result = %d\n", result);

	result = FibOne(30);
	printf("result = %d\n", result);
	result = FibOne(100000);
	printf("result = %d, count=%d\n", result, count);

	system("pause");
	return 0;
}