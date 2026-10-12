#include "stdio.h"
int main() {
	while (1)//可以重复进行计算，不用重启
	{
		int input1 = 0;
		int input2 = 0;
		int option = 0;
		printf("请输入一个数字\r\n");
		scanf_s("%d", &input1);
		printf("请输入另一个数字\r\n");
		scanf_s("%d", &input2);
		printf("请输入操作选项对应的数字\r\n :1-加法, 2-减法, 3-乘法, 4-除法\r\n");
		scanf_s("%d", &option);
		switch (option)//switch的性能比if要好，switch是直接跳转到对应的case，而if是逐个判断。
		{
		case 1:
			printf("结果是:%d\r\n", input1 + input2);
			break;
		case 2:
			printf("结果是:%d\r\n", input1 - input2);
			break;
		case 3:
			printf("结果是:%d\r\n", input1 * input2);
			break;
		case 4:
			if (input2 == 0) {
				printf("除数不能为0\r\n");
				break;
			}
			printf("结果是:%d\r\n", input1 / input2);
			break;
		}
	}
	return 0;
}