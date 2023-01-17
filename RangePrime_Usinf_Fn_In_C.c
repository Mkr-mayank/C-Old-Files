#include<stdio.h>
void Sumpr();
int main(){
	Sumpr();
}
void Sumpr(){
	int n=10,sum=0;
	printf("The prime numbers between 10 and 150 are: ");
	while(n<=150){
		int c=0,i=2;
	while(i<n){
			if(n%i==0)
			c=1;
			i++;
	}
	if(c==0){
		sum=sum+n;
		printf("%d ",n);
	}
	n++;
}
printf("\nThe Sum of prime numbers is %d\n",sum);
}                                                                  