#include<stdio.h>
struct array{
	int ar[100];
};
int main(){
	int n,i,j,ele;
	printf("How many arrays do you want to take: ");
	scanf("%d",&n);
	struct array num[n];
	for(i=0;i<n;i++){
		printf("Enter the number of elements you want to take in array %d: ",i+1);
		scanf("%d",&ele);
		printf("Enter the elements in array %d: ",i+1);
		for(j=0;j<ele;j++){
			scanf("%d",num[i].(ar[j]);
		}
		printf("\n");
	}
	printf("Here are the following arrays created\n");
	for(i=0;i<n;i++){
		ele=sizeof(num[i].ar)/sizeof(num[i].ar[0]);
		printf("Array %d: ",i+1);
		for(j=0;j<ele;j++){
			printf("%d ",num[i].ar[j]);
		}
		printf("\n");
	}
	return 0;
}