#include<stdio.h>
int main(){
	int a,b;
	char ch;
	printf("Enter your choice: ");
	scanf("%c",&ch);
	printf("Enter two Numbers: ");
	scanf("%d%d",&a,&b);
	switch(ch){
		case '1':
			printf("The sum of %d and %d is %d \n",a,b,a+b);
			break;
		case '2':
			printf("The difference of %d and %d is %d \n",a,b,a-b);
			break;
		default:
			printf("Invalid Choice");
	}
	return 0;
}
		
				    
				    
				    