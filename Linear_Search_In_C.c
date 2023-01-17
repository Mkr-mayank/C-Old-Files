#include<stdio.h>
int main(){
	int n,i,j,x,c=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int ar[n];
	printf("Enter %d elements in array: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&x);
	printf("Linear Search Operation completed\n");
	for(j=0;j<n;j++){
		if(x==ar[j]){
			printf("Element found\n");
			c=1;
			break;
		}
	}
	if(c==0){
		printf("Element not found\n");
	}
	return 0;
}
