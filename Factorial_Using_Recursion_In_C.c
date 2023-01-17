#include<stdio.h>
int Fac(int);
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("The factorial of %d is %d \n",n,Fac(n));
	return 0;
}
int Fac(int n){
	if(n<=1){
		return 1;
	}
	else{
		return(n*Fac(n-1));
	}
}