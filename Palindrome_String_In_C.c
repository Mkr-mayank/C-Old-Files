#include<stdio.h>
#include<string.h>
int main(){
	int n,i,f=0;
	char str[30];
	printf("Enter a word: ");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++){
		if(str[i]!=str[n-i-1]){
		f=1;
		break;
		}
	}
	if(f){
		printf("%s is Not a Palindrome String\n",str);
	}
	else{
		printf("%s is a Palindrome String\n",str);
	}
	return 0;
}
/*char a='*'*3;
for(int i=1;i<=5;i++)
printf("%c ",a);*/