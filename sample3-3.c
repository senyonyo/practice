#include <stdio.h>
int main (void)
{
	int n;
	
	printf("整数を入力してください");
	scanf("%d", &n);
	printf("入力値は%dで、", n);

	printf("30以上");
	if (n >=30 ){
		printf("です.\n");
	} else {
		printf("ではありません.\n");
	}
	
	return 0;
}
