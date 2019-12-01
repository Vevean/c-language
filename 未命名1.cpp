#include<stdio.h>
struct student
{
	int num;
	char name[20];
	double score[3];
	double average;
 }stu[10];
 int funs(struct student stu[],int n)
 {
 	int i,j;
	for(i=0;i<n;i++)
	{
 	scanf("%d",&stu[i].num);
 	scanf("%s",&stu[i].name);
 	for(j=0;j<3;j++)
 	scanf("%lf",&stu[i].score[j]);
 	stu[i].average=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3;
	}
	return 0;
 }
 int main()
 {
 	int n,i;
 	scanf("%d",&n);
 	funs(stu,n);
 	for(i=0;i<n;i++)
 	{
 	printf("%d ",stu[i].num);
 	printf("%s ",stu[i].name);
 	printf("%lf %lf %lf",stu[i].score[0],stu[i].score[1],stu[i].score[2]);
 	printf("%lf ",stu[i].average);
 	}
 	return 0;
  } 
