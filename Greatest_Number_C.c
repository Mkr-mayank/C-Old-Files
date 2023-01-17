#include<stdio.h>
int main(){
	float a,b,c,grt;
	printf("Enter three numbers: ");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b){
		if(a>c){
			grt=a;
		}
		else{
			grt=c;
		}
	}
	if(b>c){
		if(b>a){
			grt=b;
		}
		else{
			grt=c;
		}
	}
	printf("Greatest Number is %f",grt);
	return 0;
}