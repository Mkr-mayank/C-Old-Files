#include<stdio.h>
#include<math.h>
int main(){
	int i=2;
	while(i<=2000){
		int ar=0,y,j,r;
		y=i;
		j=i;
		while(j>0){
			r=j%10;
			j=j/10;
			ar=ar+pow(r,3);
		}
		if(ar==y){
			printf("%d ",y);
	    }
		i++;
	}
	return 0;
}


