#include<stdio.h>
flag(int *array,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				t=array[i];
				array[i]=array[j];
				array[j]=t;
			}
		}
	}
}
	int main()
	{
		int a[5],i;
		for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		flag(a,5);
		for(i=0;i<5;i++)
		{
			printf("%d",a[i]);
		}
	}
	

