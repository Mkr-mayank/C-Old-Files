#include<stdio.h>
int main(){
	int i=2;
	while(i<=500){
		int f=1,m=1,ptr=0,r,a,j;
		a=i;
		j=i;
		while(j>0){
			r=j%10;
			j=j/10;
			while(m<=r){
				f=f*m;
				m++;
			}
			ptr=ptr+f;
			f=1;
			m=1;
		}
		if(ptr==a)
		printf("%d ",a);
		i++;
	}
	return 0;
}