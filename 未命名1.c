/*�������0-9���������0-9��û�г��ֹ�����*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,i;
	int number[10];
	for(i=0;i<10;i++){
		number[i]=0;
	}
	for(i=0;i<5;i++){
		scanf("%d",&x);
		number[x]=1;//���ζ����������
	}
	for(i=0;i<10;i++){
		if(number[i]==0){
		printf("%d",i);
		return 0;

		}
	}
}
