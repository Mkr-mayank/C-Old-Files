#include<stdio.h>
#include<math.h>
int main(){
	int dec,r,bin=0,i=0,a;
	printf("Enter a decimal number: ");
	scanf("%d",&dec);
	a=dec;
	while(dec>0){
		r=dec%2;
		dec=dec/2;
		bin=bin+r*pow(10,i);
		i++;
	}
	printf("The binary no of its respective decimal number %d is %d.\n",a,bin);
	return 0;
}