#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d",&a,&b,&c);
	int sum = a + b + c;
	printf("��Сֵ%d",(a < b ? a : b) < c ? (a < b ? a : b) : c);
	printf("���ֵ%d", (a > b ? a : b) > c ? (a > b ? a : b) : c);
	printf("��ֵ%d", sum - ((a > b ? a : b) > c ? (a > b ? a : b) : c - (a < b ? a : b) < c ? (a < b ? a : b) : c));
	return 0;
}
