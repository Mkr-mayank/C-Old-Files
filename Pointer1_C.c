#include<stdio.h>
int main(){
	int a=2,b=3,ar[5]={3,1,6,7,5};
	int *p,*q,*r;
	p=&a;
	q=&b;
	r=&ar[0];
	printf("value of a=%d\n",a);
	printf("Address of a=%d\n",p);
	printf("Value of a using pointer is %d\n",*p);
	printf("Address of a=%p\n",p);
	printf("Value of b=%d\n",b);
	printf("Address of b=%p\n",q);
	printf("1st element of array ar is:%d\n",*r);
	return 0;
}
