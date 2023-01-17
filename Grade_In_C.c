#include<stdio.h>
int main(){
	float n;
	printf("Enter Your Percentage: ");
	scanf("%f",&n);
	printf("Your grade is ");
	if(n>=90){
		printf("O");
	}
	else if(n>=80 && n<90){
		printf("E");
	}
	else if(n>=70 && n<80){
		printf("A");
	}
	else if(n>=60 && n<70){
		printf("B");
	}
	else if(n>=50 && n<60){
		printf("C");
	}
	else if(n>=40 && n<50){
		printf("D");
	}
	else if(n<40){
		printf("F");
	}
	else{
		printf("Wrong Input");
	}
}