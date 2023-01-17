#include<stdio.h>
void PrintArray(int ar[], int n){
	for(int i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	printf("\n");
}
void Swap(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int Partition(int ar[], int low, int high){
	int pivot=ar[high];
	int i=low-1;
	for(int j=low;j<high;j++){
		if(ar[j]<=pivot){
			i++;
			Swap(&ar[i],&ar[j]);
		}
	}
	Swap(&ar[i+1],&ar[high]);
	return (i+1);
}
void Quick_Sort(int ar[], int low, int high){
	if(low<high){
		int pi=Partition(ar,low,high);
		Quick_Sort(ar,low,pi-1);
		Quick_Sort(ar,pi+1,high);
	}
}
int main(){
	int n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int ar[n];
	printf("Enter %d elements in array: ");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("Unsorted array is: ");
	PrintArray(ar,n);
	Quick_Sort(ar,0,n-1);
	printf("Sorted array is: ");
	PrintArray(ar,n);
	printf("Quick Sort Operation Completed\n");
	return 0;
}