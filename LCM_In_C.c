#include<stdio.h>
int main(){
	int a,b,max,lcm,i=0;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
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