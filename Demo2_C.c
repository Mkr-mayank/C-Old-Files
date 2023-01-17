#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char ch;
	printf("Enter 'B' for Binary or 'S' for Sentence: ");
	scanf("%c",&ch);
	if(ch=='S'){
		int d,bin,i,n,j,num;
		char st[100];
		printf("Enter your word: ");
		scanf("%[^\n]",&st);
		n=strlen(st);
		printf("%d\n",n);
		for(j=0;j<n;j++){
			num=int(st[j]);
			bin=0;
			i=0;
			while(num>0){
				d=num%2;
				bin=bin+d*pow(10,i);
				num=num/2;
				i++;
			}	
			printf("%d ",bin);
		}
	}
	if(ch=='B'){
		int i,d,n,k,m,num,dec;
		char ch=' ';
		printf("Enter the length of secret array: ");
		scanf("%d",&n);
		int bin[n];
		printf("Enter the secret code: ");
		for(k=0;k<n;k++){
			scanf("%d",&bin[k]);
		}
		for(m=0;m<n;m++){
			ch=' ';
			num=bin[m];
			dec=0,i=0;
			while(num>0){
				d=num%10;
				dec=dec+d*pow(2,i);
				num=num/10;
				i++;
			}
			ch=char(dec);
			printf("%c",ch);
		}	
	}
	
	return 0;
}