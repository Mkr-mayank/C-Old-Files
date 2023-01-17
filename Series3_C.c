#include<stdio.h>
int main(){
	int n,i=1;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	float sum=1,a=2;
	printf("The sum of Series 1");
	while(i<n){
		sum=sum+(1/a);
		printf("+1/%f",a);
		a+=2;
		i++;
	}
	printf("is %f\n",sum);
	return 0;
}