#include<stdio.h>
int main(){
	int n,i=1;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	float sum=0;
	printf("The Sum of Series 1");
	while(i<=n){
		sum=sum+i;
		if(i<n){
			printf("+%d",i+1);
		}
		i++;
	}
	printf(" is %f\n",sum);
	return 0;
}