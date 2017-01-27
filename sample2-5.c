#include <stdio.h>
int main (void)
{
	printf("１か２を入力してください. \n");

	int a;
	
	scanf("%d", &a);
	switch(a){
		case 1:
			printf("%dは１です. \n",a);
			break;
		case 2:
			printf("%dは２です. \n",a);
			break;
		default:
			printf("数字の１か２かを入力してください.\n");
			break;

		}
	return 0;
}
