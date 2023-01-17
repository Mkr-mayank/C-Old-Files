#include<stdio.h>
int main(){
	int r,c,i,j,k;
	printf("Enter the no of rows and columns in matrix: ");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],p[r][c];
	printf("Enter the elements in matrix 1:\n");
	for(i=0;i<r;i++){
		printf("Enter the elements in row %d: ",i+1);
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The required matrix 1 is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the elements in matrix 2:\n");
	for(i=0;i<r;i++){
		printf("Enter the elements in row %d: ",i+1);
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The required matrix 2 is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("The product of matrix 1 and matrix 2 is: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			p[i][j]=0;
			for(k=0;k<c;k++){
				p[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	return 1;
}