#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[4][20],b[10];
	int i;
	for(i=0;i<4;i++)
	{
	scanf("%s",a[i]);	
	}
	for(i=0;i<4;i++)
	{
		b[2*i]=a[i][0];
		b[2*i+1]=a[i][1];
	}
	b[2*i]='\0';
	printf("%s\n",b);
	return 0;
} 
