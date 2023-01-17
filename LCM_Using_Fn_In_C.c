#include<stdio.h>
int LCM(int,int);
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	LCM(a,b);
	return 0;
}
int LCM(int a,int b){
	int max,lcm,i=0;
	max=(a>b)?a:b;
	while(i==0){
		if(max%a==0 && max%b==0){
			lcm=max;
			i=1;
		}
		max++;
	}
	printf("The LCM of %d and %d is %d\n",a,b,lcm);
	return 0;
}