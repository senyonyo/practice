#include <stdio.h>
int main (void){
	int koku, suu;
	int avg;

	printf("国語の点数を入力してください");
	scanf("%d", &koku);
	printf("数学の点数を入力してください");
	scanf("%d", &suu);
	printf("国語の点数は%d点で、", koku);
	printf("数学の点数は%d点でのとき", suu);

	avg = (koku + suu) / 2;
	printf("平均点は%d点です.\n", avg);

	return 0;
	
}
