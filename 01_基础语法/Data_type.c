#include<stdio.h>

int main()
{
	//整数类型 int 4字节 32位 short 2字节 16位 long 4字节 32位 long long 8字节 64位
	int a = 10; //定义一个整型变量a并赋值为10
	printf("a = %d\n", a); //输出变量a的值
	printf("sizeof(a) = %d\n", sizeof(a)); //输出变量a的大小
	short b = 20; //定义一个短整型变量b并赋值为20
	printf("b = %d\n", b); //输出变量b的值
	printf("sizeof(b) = %d\n", sizeof(b)); //输出变量b的大小
	long c = 30L; //定义一个长整型变量c并赋值为30
	printf("c = %ld\n", c); //输出变量c的值
	printf("sizeof(c) = %d\n", sizeof(c)); //输出变量c的大小
	long long d = 40LL; //定义一个长整型变量d并赋值为40
	printf("d = %lld\n", d); //输出变量d的值
	printf("sizeof(d) = %d\n", sizeof(d)); //输出变量d的大小





	//整型分为短整型short int,整型int,长整型long int,长长整型long long int
	//有无符号整数 有符号signed int 4字节 32位 unsigned int 4字节 32位 有符号整数可以表示负数和正数 无符号整数只能表示正数
	//用变量表示序号时 就要用到无符号整数 因为序号不可能是负数
	//打印无符号整数时 用%u打印 有符号整数用%d打印
    return 0;
}