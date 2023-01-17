#include<stdio.h>
void Printing(int count);
int main(){
	Printing(5);
	return 0;
}
void Printing(int count){
	if(count==0){
		return;
	}
	printf("This is my first C Program using Recusion\n");
	Printing(count-1);
}