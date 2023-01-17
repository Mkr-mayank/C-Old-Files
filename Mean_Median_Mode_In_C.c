#include<stdio.h>
int main(){
	int i,t,k,j,n,m=1,count;
	float mean,median,mode,sum=0;
	printf("Enter the no of terms: ");
	scanf("%d",&n);
	int x[n],d[2][n];
	printf("Enter the value of x :");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		sum=sum+x[i];
	}
	//Calculation for mean:
	mean=sum/n;
	//Sorting the array for calculating median:
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(x[i]>x[j]){
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	//Calculation of Median:
	printf("\n");
	if(n%2==0){
		k=n/2;
		median=(x[k-1]+x[k])/2;
	}
	else{
		k=(n-1)/2;
		median=x[k];
	}
	//Calculation of Mode:
	for(i=0;i<n-1;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(x[i]==x[j]){
				count++;
			}
		}
		if(count>m){
			mode=x[i];
		}
	}
	printf("Mean, Median and Mode are %f,%f and %f respectively\n",mean,median,mode);
	return 0;
}