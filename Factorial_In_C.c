#include<stdio.h>
int main(){
	int n,fac=1,i=1;
	printf("Enter the number whose factorial you want to display : ");
	scanf("%d",&n);
	while(i<=n){
		fac=fac*i;
		i++;
	}
	printf("The factorial of %d is %d",n,fac);
	return 0;
}