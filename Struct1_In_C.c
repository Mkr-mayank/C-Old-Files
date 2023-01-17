//To accept n Student datas ie.,Name, Roll and CGPA, and calculate the average CGPA.
#include<stdio.h>
struct stud{
	char name[30];
	int roll;
	float cgpa;
};
int main(){
	int n,i;
	float sum=0,avg;
	printf("Number of data you want to enter: ");
	scanf("%d",&n);
	struct stud s[n];
	printf("Size of struct stud: %lu\n",sizeof(struct stud));
	for(i=0;i<n;i++){
		printf("Enter the Data of Student %d\n",i+1);
		printf("Enter Name, Roll & CGPA: ");
		scanf("%s%d%f",s[i].name,&s[i].roll,&s[i].cgpa);
		printf("\n");
	}
	printf("The following Datas are:\n");
	for(i=0;i<n;i++){
		printf("Name: %s Roll: %d CGPA: %f\n",s[i].name,s[i].roll,s[i].cgpa);
		sum=sum+s[i].cgpa;
	}
	avg=sum/n;
	printf("\n The average of CGPA of the students is: %f\n",avg);
}