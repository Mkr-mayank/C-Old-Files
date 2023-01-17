#include<stdio.h>
#include<string.h>
int main(){
	int vow=0,cons=0,sp=0,i;
	char str[100],ch;
	printf("Enter a Sentence: ");
	scanf("%[^\n]",str);
	int l=strlen(str);
	for(i=0;i<l;i++){
		if(str[i]=='A'|str[i]=='E'|str[i]=='I'|str[i]=='O'|str[i]=='U'|str[i]=='a'|str[i]=='e'|str[i]=='i'|str[i]=='o'|str[i]=='u')
		vow=vow+1;
		else if(str[i]!=' ')
		cons=cons+1;
		else if(str[i]==' ')
		sp=sp+1;
	}
	printf("Number of vowels = %d\n",vow);
	printf("Number of space = %d\n",sp);
	printf("Number of consonant = %d\n",cons);
	return 0;
}