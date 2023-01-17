#include<stdio.h>
int main(){
	for(int i=1,j=i;i<=5 && j<=i;i++,j++){
		printf("%d ",i);
		printf("%d\n",j);
	}
	return 0;
}