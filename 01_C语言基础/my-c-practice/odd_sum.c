#include "stdio.h"
int main()
{
	int sum = 0;
	int a = 1;
	while (a <= 100)
	{
		if (a % 2 == 1)
		{
			printf("%d是奇数\r\n", a);
			sum += a;
		}
		a++;
	}
	printf("1-100之间的奇数和是:%d\r\n", sum); 
 return 0;
}
