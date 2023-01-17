#include<stdio.h>
#include<string.h>
int main(){
	char st[100];
	int i,t,n;
	printf("Enter a word: ");
	scanf("%[^\n]",st);
	n=strlen(st);
	for(i=0;i<n/2;i++){
		t=st[i];
		st[i]=st[n-1-i];
		st[n-1-i]=t;
	}
	printf("The reversed string is: %s",st);
	return 0;
}