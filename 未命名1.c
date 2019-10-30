/*输入五个0-9的数，输出0-9中没有出现过的数*/
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
		number[x]=1;//依次读入五个数；
	}
	for(i=0;i<10;i++){
		if(number[i]==0){
		printf("%d",i);
		return 0;

		}
	}
}
