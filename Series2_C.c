#include<stdio.h>
#include<math.h>
int main(){
	int n,i=1;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	float sum=0;
	printf("The sum of Series 1^2");
	while(i<=n){
		sum=sum+pow(i,2);
		if(i<n){
			printf("+%d^2",i+1);
		}
		i++;
	}
	printf("is %f\n",sum);
	return 0;
}