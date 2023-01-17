#include<stdio.h>
int main(){
	int n,i,flag=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			printf("%d is not a prime number\n",n);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d is a prime number\n",n);
	}
	return 0;
}
