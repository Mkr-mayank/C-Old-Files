#include<stdio.h>
int main(){
	int n,i,t;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i++){
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	printf("The reversed array is: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}