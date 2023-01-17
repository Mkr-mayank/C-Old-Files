#include<stdio.h>
int GCD(int a, int b);
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("The GCD of %d and %d is %d\n",a,b,GCD(a,b));
	return 0;
}
int GCD(int a, int b){
	if(b==0){
		return a;
	}
	GCD(b,a%b);
}