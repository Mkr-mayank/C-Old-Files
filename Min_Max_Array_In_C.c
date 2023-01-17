#include<stdio.h>
int main(){
	int n,ind1,ind2,i;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	int a[n],max=0,min;
	printf("Enter the elements in an array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
			ind1=i;
		}
		if(min>a[i]){
			min=a[i];
			ind2=i;
		}
	}
	printf("The maximum number in the array is %d at index %d.\n",max,ind1);
	printf("The minimum number in the array is %d at index %d.\n",min,ind2);
	return 0;
}