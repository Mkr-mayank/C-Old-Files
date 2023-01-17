#include<stdio.h>
int GCD(int,int);
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	GCD(a,b);
	return 0;
}
int GCD(int a,int b){
	int lcm,gcd,i=0,max;
	max=(a>b)?a:b;
	while(i==0){
		if(max%a==0 && max%b==0){
			lcm=max;
			i=1;
		}
		max++;
	}
	gcd=(a*b)/lcm;
	printf("The LCM of %d and %d is %d\n",a,b,lcm);
	printf("The GCD of %d and %d is %d\n",a,b,gcd);
	return 0;
}