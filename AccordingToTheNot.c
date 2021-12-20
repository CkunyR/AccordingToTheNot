#include <stdio.h>

int main()
{
	int a = 11;
	//00000000000000000000000000001011
	a = a | (1 << 2);
	//00000000000000000000000000000100 - 按位或 -- 1<<2
	//00000000000000000000000000001111
    printf("%d\n", a);
	//00000000000000000000000000001111
	//11111111111111111111111111111011 -  ~(1<<2)
	a = a & (~(1 << 2));
	printf("%d\n", a);
	//int a = 0;
	//printf("%d\n", a);
	//printf("%d\n", ~a);
	////按二进制位取反
	////00000000000000000000000000000000
	////11111111111111111111111111111111 - 补码
	////11111111111111111111111111111110 - 反码
	////10000000000000000000000000000001 - 源码
	return 0;
}