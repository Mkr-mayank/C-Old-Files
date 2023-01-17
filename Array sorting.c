#include<stdio.h>
int main(){
	int n,i,j,t;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in array: \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The required array is: ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	for(j=0;j<n;j++){
		for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
		}
	}
	}
	printf("Sorted array is: ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}