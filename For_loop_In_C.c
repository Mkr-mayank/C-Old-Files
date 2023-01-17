#include<stdio.h>
int main(){
	int i=1,j=1;
	for(;;){
		printf("%d ",i);
		i++;
		if(i>10)
		break;
	}
	i=1;
	printf("\n\n");
	for(;i<=10;){
		printf("%d ",i);
		i++;
	}
	printf("\n\n");
	for(i=0;i<10;printf("%d ",i)){
		i++;
	}
	return 0;
}
