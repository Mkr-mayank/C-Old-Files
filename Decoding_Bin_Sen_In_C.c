#include<stdio.h>
#include<math.h>
int main(){
	int p,r,l,k,m,nu,dec;
	printf("Enter the length of secret word: ");
	scanf("%d",&l);
	int binary[l];
	printf("Enter the secret code: ");
	for(k=0;k<l;k++){
		scanf("%d",&binary[k]);
	}
	printf("\n");
	for(m=0;m<l;m++){
		char kh=' ';
		nu=binary[m];
		dec=0,p=0;
		while(nu>0){
			r=nu%10;
			dec=dec+r*pow(2,p);
			nu=nu/10;
			p++;
		}
		kh=(char)dec;
		printf("%c",kh);
	}
	return 0;	
}
