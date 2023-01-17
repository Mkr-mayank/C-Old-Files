#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],s[r][c];
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
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The sum of matrix 1 and matrix 2 is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}