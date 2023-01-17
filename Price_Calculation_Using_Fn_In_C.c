#include<stdio.h>
void CalPrice(float n);
int main(){
	float n=200;
	CalPrice(n);
	printf("The Actual Price is %f\n",n);
	return 0;
}
void CalPrice(float n){
	n=n+(0.18*n);
	printf("Price after adding GST is %f\n",n);
}