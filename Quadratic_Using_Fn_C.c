#include<stdio.h>
#include<math.h>
int quad(int,int,int);
int main(){
	int a,b,c;
	printf("Enter the value of a,b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	quad(a,b,c);
	return 0;
}
int quad(int a,int b,int c){
	float d,x1,x2,rl,img;
	d=pow(b,2)-(4*a*c);
	x1=(-b+pow(d,0.5))/(2*a);
	x2=(-b-pow(d,0.5))/(2*a);
	rl=float(-b)/(2*a);
	img=sqrt(-d)/(2*a);
	printf("The quadratic equation is %dx^2 + %dx + %d = 0\n",a,b,c);
	if(d>0){
		printf("Roots are real but not equal.\n");
		printf("The roots are %f and %f \n",x1,x2);
	}
	else if(d==0){
		printf("Roots are real and equal.\n");
		printf("The root is %f \n",x1);
	}
	else{
		printf("Roots are not real.\n");
		printf("The real part is %f\n",rl);
		printf("The imaginary parts are +%f and -%f\n",img,img);
	}
	return 0;
}