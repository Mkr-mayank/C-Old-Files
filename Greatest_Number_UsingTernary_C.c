#include<stdio.h>
int main(){
	int n1,n2;
	printf("Enter two no.: ");
	scanf("%d%d",&n1,&n2);
	n1>n2?printf("%d",n1):printf("%d",n2);
	return 0;
}