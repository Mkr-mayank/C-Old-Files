#include<stdio.h>
int main(){
int i,n,a[10],ele,pos;
printf("Enter the no of element\n");
scanf("%d",&n);
//n=5;
printf("Enter the element:-\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
//a[10]=(0,1,2,4,5);
printf("Enter the element & pos:-\n");
scanf("%d%d",&ele,&pos);
//ele=4;
//pos=3;
for(i=n;i>=pos;i--){
a[i]=a[i-1];
}
a[pos-1]=ele;
printf("New:-\n");
for(i=0;i<=n;i++){
printf("%d ",a[i]);
}
printf("\n");
return 0;
}