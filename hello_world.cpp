#include<iostream>
int main(){
	int a;
	int b;
	int ans=1;
	std::cin>>a>>b;

	for( int i=0 ; i<b  ; i+=1 ){
		ans= ans * a;
	}
	std::cout<<ans<<std::endl;
	return 0;
	}

