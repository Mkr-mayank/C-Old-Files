#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(){
	int n,r,bin,num;
	char flag;
	printf("Enter a number: ");
	scanf("%d",&n);
	num=n;
	while(n>0){
		r=n%10;
		n=n/10;
		if(r==0 || r==1){ 
			flag='B';
		}
		else{
			flag='D';
			break;
		}
	}
	if(flag=='B'){
		int i=0,d,dec=0;
		while(num>0){
			d=num%10;
			dec=dec+d*pow(2,i);
			num=num/10;
			i++;
		}
		printf("Its respective Decimal Number is: %d\n",dec);	
 	}
	else if(flag=='D'){
		int bin=0,d,i=0;
		while(num>0){
			d=num%2;
			bin=bin+d*pow(10,i);
			num=num/2;
			i++;
		}
		printf("Its respective Binary Number is: %d\n",bin);
	}
	else{
		printf("Invalid Number\n");
	}
	return 0;
}