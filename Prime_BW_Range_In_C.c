#include<stdio.h>
int main(){
	int i,j;
	for(i=10;i<100;i++){
		int c=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				c=1;
			}
		}
		if(c==0){
			printf("%d ",i);
		}
	}
}