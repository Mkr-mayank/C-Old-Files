#include<stdio.h>
int main(){
int i,l,k=0,j=0,c;
	printf("Enter the size of array: ");
	scanf("%d",&l);
	int ar[l];
	printf("Enter the elements: ");
	for(i=0;i<l;i++){
		scanf("%d",&ar[i]);
	}
	printf("Check whether there is duplicate element or not\n");
	while(j<l){
		if(ar[j]==ar[k] && j!=k){
			printf("True\n");
			c=0;
			break;
		}
		else{
			c=1;
			k++;
			if(k==(l-1)){
				j++;
				k=0;
			}
		}
	}
	if(c==1){
		printf("False");
	}
	return 0;
}