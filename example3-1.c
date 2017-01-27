#include <stdio.h>
int main(void){
	int n;
	double x;
	char c;

	printf("** 入力**\n");
	printf("１文字で入力");
	scanf("%c", &c);
	printf("整数で入力");
	scanf("%d", &n);
	printf("浮動小数点数で入力");
	scanf("%lf", &x);

	printf("** 表示 **\n");
	printf("c=%c\n", c);
	printf("n=%d\n", n);
	printf("x=%lf\n", x);

	return 0;
}
