//To display the element of specific position using pointer variable
#include<stdio.h>
int main(){
	int n,*p,i,pos;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements in array: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The array formed is: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("Enter the position of the element you want to display: ");
	scanf("%d",&pos);
	p=&a[pos-1];
	printf("The required element is %d\n",*p);
	return 0;
}