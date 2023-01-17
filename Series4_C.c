#include<stdio.h>
#include<math.h>
int main(){
	int n,i=1;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	float sum=1,a=1,t;
	printf("The Sum of Series 1");
	while(i<n){
		t=pow(2,a);
		sum=sum+(1/t);
		printf("+1/%f",t);
		a++;
		i++;
	}
	printf("is %f\n",sum);
	return 0;
}