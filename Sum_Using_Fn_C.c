#include<stdio.h>
int Sum(int a,int b){
	int c=a+b;
	return c;
}
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Sum of %d and %d is %d\n",a,b,Sum(a,b));
	return 0;
}
