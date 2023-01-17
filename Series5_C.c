#include<stdio.h>
#include<math.h>
int main(){
	float sum=1;
	int i=1,n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	while(i<n){
		sum=sum+(pow(-1,i)/(2*i));
		i++;
	}
	printf("The sum of series 1-1/2+1/4-1/6+...1/%d is %f\n",(2*(n-1)),sum);
	return 0;
}