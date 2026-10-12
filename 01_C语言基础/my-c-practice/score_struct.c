#include "stdio.h"
#include "stdlib.h"
typedef struct ScoreSheet
{
	char name[1000];
	int score;
}SS;

SS noname37;

int main()
{
	printf("请输入姓名和成绩\r\n");
	scanf_s("%s %d", noname37.name, (unsigned)_countof(noname37.name), &noname37.score);//scanf_s在输入数组时需要指定数组的长度
	printf("姓名:%s,成绩:%d\r\n", noname37.name, noname37.score);
	return 0;
}