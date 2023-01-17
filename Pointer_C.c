#include<stdio.h>
int main(){
	int *p;
	int **q;
	int a=5;
	p=&a;
	q=&p;
	printf("%p\n",p);
	printf("%d\n",a);
	printf("%d\n",p);
	printf("%d\n",&p);
	printf("%p\n",&a);
	printf("%p\n",&p);
	printf("%d\n",q);
	printf("%d\n",&q);
	printf("%p\n",q);
}