#include<stdio.h>
int main(){
	int n,i,s=0;
	float avg;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the elements in array: ");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
		s=s+ar[i];
	}
	avg=float(s)/n;
	printf("The average of elements in the array is: %f\n",avg);
	return 0;
}