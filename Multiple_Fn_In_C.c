#include<stdio.h>
float Square(float side);
float Rectange(float l,float b);
float Circle(float r);
int main(){
	float r=2.3;
	printf("Area is: %f\n",Circle(r));
	return 0;
}
float Square(float side){
	return side*side;
}
float Rectange(float l,float b){
	return l*b;
}
float Circle(float r){
	return 3.14*r*r;
}