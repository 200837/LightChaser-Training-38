#include "stdio.h"
#include "stdlib.h"
int main()
{
	int input_Data[4] = { 1,2,3,5 };//假设输入数组是这个，可以根据实际情况修改
	int sum = 0;
	double average = 0;

	int length = sizeof(input_Data) / sizeof(input_Data[0]);//数组内容的个数，
	int* arr1 = (int*)malloc(length * sizeof(int));
	if (arr1 == NULL)
	{
		printf("内存炸了\r\n");
		return -1;
	}
	else
	{
		for (int i = 0; i < length; i++)
		{
			arr1[i] = input_Data[i];
		}

		for (int i = 0; i < length; i++)
		{
			printf("%d\r\n", arr1[i]);
		}
		for (int i = 0; i < length; i++)
		{
			sum = sum + arr1[i];
		}
		average = sum / (double)length;
		printf("平均值是:%.4f\r\n", average);
		free(arr1);
		arr1 = NULL;//建议置空以防止野指针
		return 0;
	}

}
//也就是说malloc三大注意事项1，判断返回值是否为NULL,2,free释放内存，3.释放后置空指针

