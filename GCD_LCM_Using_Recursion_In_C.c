#include<stdio.h>
	int LCM(int,int);
	int main(){
		int a,b,gcd;
		printf("Enter two numbers: ");
		scanf("%d%d",&a,&b);
		printf("The LCM of %d and %d is %d\n",a,b,LCM(a,b));
		gcd=(a*b)/LCM(a,b);
		printf("The GCD of %d and %d is %d\n",a,b,gcd);
		return 0;
	}
int LCM(int a,int b){
	static int max=1;
	if(max%a==0 && max%b==0){
		return max;
	}
	else{
		max++;
		LCM(a,b);
	}
	
}