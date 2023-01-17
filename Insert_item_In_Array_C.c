#include<stdio.h>
int main(){
	int n,i,ele,ind;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	printf("The created array is: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter the element and the index at which it is to be inserted: ");
	scanf("%d%d",&ele,&ind);
	a[ind]=ele;
	printf("\n After inserting the new element the required array is: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
