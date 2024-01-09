#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d",&a,&b,&c);
	int sum = a + b + c;
	printf("最小值%d",(a < b ? a : b) < c ? (a < b ? a : b) : c);
	printf("最大值%d", (a > b ? a : b) > c ? (a > b ? a : b) : c);
	printf("中值%d", sum - ((a > b ? a : b) > c ? (a > b ? a : b) : c - (a < b ? a : b) < c ? (a < b ? a : b) : c));
	return 0;
}
