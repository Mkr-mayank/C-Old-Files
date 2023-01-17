#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the no of lines: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i==1||i==n){
			for(int j=1;j<=n;j++){
				printf("* ");
			}
			printf("\n");	
		}
		else{
			printf("*\n");
		}
	}
	return 0;
}