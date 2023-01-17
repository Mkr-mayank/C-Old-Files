#include<stdio.h>
int main(){
	int n,p=0,a,r;
	printf("Enter a Number: ");
	scanf("%d",&n);
	a=n;
	while(n>0){
		r=n%10;
		n=n/10;
		p=p*10+r;
	}
	if(p==a){
		printf("%d is a Palindrome Number \n",a);
	}
	else{
		printf("%d is not a Palindrome Number \n",a);
	}
	return 0;
}