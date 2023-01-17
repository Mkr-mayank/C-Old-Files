#include<stdio.h>
float Percentage(float comp, float math, float eng);
int main(){
	float c,m,e;
	printf("Enter the marks in Computer, Maths and English: ");
	scanf("%f%f%f",&c,&m,&e);
	printf("The percentage you got is %f\n",Percentage(c,m,e));
	return 0;
}
float Percentage(float comp, float math, float eng){
	float per=(comp+math+eng)/3;
	return per;
}