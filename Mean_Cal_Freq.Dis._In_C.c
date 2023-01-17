#include<stdio.h>
int main(){
	int n,i;
	float mean,sf=0,sxf=0;
	printf("Enter the no of datas: ");
	scanf("%d",&n);
	int x[n],f[n];
	printf("Enter the distribution and its frequency:\n");
	for(i=0;i<n;i++){
		printf("Enter data %d: ",i+1);
		scanf("%d%d",&x[i],&f[i]);
		sxf=sxf+(x[i]*f[i]);
		sf=sf+f[i];
	}
	mean=sxf/sf;
	printf("The mean of the following frequency distribution is %f\n",mean);
	return 0;
}