#include<stdio.h>
#include<math.h>
int quad(int,int,int);
int main(){
	int a,b,c;
	printf("Enter the value of a,b,c in quadratic equation: ");
	scanf("%d%d%d",&a,&b,&c);
	quad(a,b,c);
	return 0;
}
int quad(int a,int b,int c){
	float d,x1,x2;
	d=pow(b,2)-(4*a*c);
	x1=(-b+pow(d,0.5))/(2*a);
	x2=(-b-pow(d,0.5))/(2*a);
	if(d>0){
		printf("Roots are real but not equal.\n");
		printf("The roots of (%d)x^2 + (%d)x + (%d) = 0 are %f and %f \n",a,b,c,x1,x2);
	}
	else if(d==0){
		printf("Roots are real and equal.\n");
		printf("The roots of (%d)x^2 + (%d)x + (%d) = 0 is %f \n",a,b,c,x1);
	}
	else{
		printf("Roots are not real.\n");
	}
	return 0;
}