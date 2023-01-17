#include<stdio.h>
int add(int,int);
int main(){
	int a,b,sum;
	printf("Enter two no : ");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("The sum of %d and %d is %d ",a,b,sum);
}
add(int x,int y){
	int m;
	m=x+y;
	return m;
}
