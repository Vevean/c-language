/*�����û��������ֵ�ƽ������-1��ʾ������������������˼�������*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	int i=1;
	int sum=0;
	double average;
	scanf("%d",&x);
	do{
		scanf("%d",&x);
		if(x!=-1){
			sum+=x;
			i++;}
	}while(x!=-1);
	average=1.0*sum/i;
	printf("average=%lf,i=%d",average,i);
	return 0;
}



