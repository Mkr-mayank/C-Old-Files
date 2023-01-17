
#include<stdio.h>
int main(){
	int n,i=1,f=1,ptr=0,r,a;
	printf("Enter a Number: ");
	scanf("%d",&n);
	a=n;
	while(n>0){
		r=n%10;
		n=n/10;
		while(i<=r){
			f=f*i;
			i++;
		}
		ptr=ptr+f;
		f=1;
		i=1;
	}
	if(ptr==a)
	printf("%d is a Peterson Number \n",a);
	else
	printf("%d is not a Peterson Number \n",a);
	return 0;
}