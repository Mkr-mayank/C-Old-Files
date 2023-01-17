#include<stdio.h>
int main(){
	int n,sum=0;
	printf("Enter the last term: ");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("Sum of Series is: ");
	printf("%d",sum);
	return 0;
}