#include<stdio.h>
int main(){
	int n,ele,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int ar[n],low=0,mid=0,high=n-1,flag=1;
	printf("Enter %d elements in array in ascending order: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&ele);
	printf("Binary search operation completed\n");
	while(ele!=ar[mid]){
		mid=(low+high)/2;
		if(ele==ar[mid]){
			flag=1;
		}
		else if(ele>ar[mid]){
			low=mid+1;
			flag=0;
		}
		else{
			high=mid-1;
			flag=0;
		}
	}
	if(flag==1){
		printf("Element found at index %d\n",mid);
	}
	else{
		printf("Element not found\n");
	}
	return 0;
}