#include<stdio.h>
int main(){
	int n,r,rev=0,a;
	printf("Enter a number: ");
	scanf("%d",&n);
	a=n;
	while(n>0){
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	printf("The reverse of the %d is %d \n",a,rev);
	return 0;         
}




