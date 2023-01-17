#include<stdio.h>
#include<math.h>
int main(){
	char ch;
	printf("Press 'P' for Prime, 'S' for Peterson or 'A' for Armstrong : ");
	scanf("%c",&ch);
	switch(ch){
		case 'P':
			int i,j,start,stop;
			printf("Enter the starting and stopping range in which you want to find the prime numbers: ");
			scanf("%d%d",&start,&stop);
			for(i=start;i<stop;i++){
				int c=0;
				for(j=2;j<i;j++){
					if(i%j==0){
						c=1;
					}
				}
				if(c==0){
					printf("%d ",i);
				}
			}
			break;
		case 'S':
			i=2;
			while(i<=500){
				int f=1,m=1,ptr=0,r,a,j;
				a=i;
				j=i;
				while(j>0){
					r=j%10;
					j=j/10;
					while(m<=r){
						f=f*m;
						m++;
					}
					ptr=ptr+f;
					f=1;
					m=1;
				}
				if(ptr==a)
				printf("%d ",a);
				i++;
			}
			break;
		case 'A':
			printf("Enter the starting and stopping range in which you want to find the prime numbers: ");
			scanf("%d%d",&start,&stop);
			i=start;
			while(i<=stop){
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
			break;
		default:
			printf("Invalid Choice \n");
	}
	return 0;
}