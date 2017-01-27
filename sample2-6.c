#include <stdio.h>
int main(void){
	int n,i,s;
	scanf("%d", &n);
	if(n < 0) return 0;

	s = 1;
	for(i =1; i <=n; i++) s = s + i;
	printf("%d", s);
	return 0;
}
