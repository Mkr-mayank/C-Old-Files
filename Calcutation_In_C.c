#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two Integers: ");
	scanf("%d%d",&a,&b);
	printf("Sum of %d and %d is : %d\n",a,b,a+b);
	printf("Subtraction of %d and %d is : %d\n",a,b,a-b);
	printf("Multiplication of %d and %d is : %d\n",a,b,a*b);
	printf("Division of %d and %d is : %d\n",a,b,a/b);
}