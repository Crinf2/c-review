#include<stdio.h>
int main()
{
	//输出常量   整型%d   浮点型%f   字符%c   字符串%s
	printf("I am %d years old\n", 20);
	printf("I am %f meters tall\n", 1.78);
	printf("My grade is %c \n", 'A');
	printf("I am %s \n", "GuoDeZhuang");

	//输出多个常量
	printf("I am %d years old, I am %f meters tall, My grade is %c, I am %s \n", 20, 1.78, 'A', "GuoDeZhuang");

	return 0;
}