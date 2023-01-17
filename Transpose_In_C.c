#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("Enter the no of rows and columns in a matrix: ");
	scanf("%d%d",&r,&c);
	int m[r][c];
	printf("Enter the elements in matrix:\n");
	for(i=0;i<r;i++){
		printf("Enter the elements in row %d: ",i+1);
		for(j=0;j<c;j++){
			scanf("%d",&m[i][j]);
		}
	}
	printf("The required matrix is: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("\nThe transpose of above matrix is: \n");
	for(j=0;j<c;j++){
		for(i=0;i<r;i++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}