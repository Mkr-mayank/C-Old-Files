#include<stdio.h>
int main(){
	int n;
	printf("Enter the Year: ");
	scanf("%d",&n);
	if(n%4==0){
		printf("%d is a Leap Year",n);
	}
	else{
		printf("%d is not a Leap Year",n);
	}
}