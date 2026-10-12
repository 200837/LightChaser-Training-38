#include "stdio.h"
#include "string.h"
int main()
{
	int a = 1;
	int b = 100;
	int temp = 0;

	int *pa = &a;//a指针
	int* pb = &b;//b指针
	//
	//temp = *pa;//临时变量存储a的值
	//a = *pb;
	//b = temp;

	//或者直接内存复制
	temp = *(pa);//a的值赋给temp
	memcpy(pa, pb, 4);
	memcpy(pb, &temp, 4);//int 4 字节

	printf("a=%d,b=%d\r\n", a, b);
	
}