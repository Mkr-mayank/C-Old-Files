#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n],i,pos;
	printf("Enter the elements in array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the position of element to be deleted: ");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	printf("The new array is: ");
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	return 0;
}