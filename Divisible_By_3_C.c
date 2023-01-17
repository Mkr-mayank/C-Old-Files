#include<stdio.h>
int main(){
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	printf("%d\n",n%3==0);
	return 0;
}