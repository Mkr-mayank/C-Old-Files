#include<stdio.h>
int Fib(int);
int main(){
	int n;
	printf("Enter the no of terms to be displayed: ");
	scanf("%d",&n);
	printf("The Fibonacci Series is: ");
	Fib(n);
	return 0;
}
int Fib(int n){
	int a=0,b=1,c,i=1;
	while(i<=n){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}