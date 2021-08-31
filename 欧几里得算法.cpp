#include<stdio.h>

int main(){
	int a,b,y;
	scanf("%d %d",&a,&b);
	y=a%b;
	while(y!=0){
		a=b;
		b=y;
		y=a%b;
	}
	printf("%d",b);
	
	return 0;
}
