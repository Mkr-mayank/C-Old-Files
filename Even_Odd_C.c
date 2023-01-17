#include<stdio.h>
int main(){
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	if(n%2==0){
		printf("%d is An Even Number",n);
	}
	else{
		printf("%d is An Odd Number",n);
	}
	return 0;
}