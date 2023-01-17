#include<stdio.h>
int Fib(int);
int main(){ 
	int n, i; 
	printf("Enter the number of element you want in series :"); 
	scanf("%d",&n); 
	printf("Fibonacci series is : \n");
	for(i=0;i<n;i++) { 
		printf("%d ",Fib(i));
	}
}
 
int Fib(int i){ 
	if(i==0) 
	return 0; 
	else if(i==1) 
	return 1; 
	else 
	return(Fib(i-1)+Fib(i-2));
}