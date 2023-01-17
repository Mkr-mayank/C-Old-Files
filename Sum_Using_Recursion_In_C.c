#include<stdio.h>
int Add(int n);
int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("The sum of %d natural numbers is %d\n",n,Add(n));
	return 0;
}
int Add(int n){
	int sum;
	if(n==0){
		return 0;
	}
	return (sum=n+Add(n-1));
}