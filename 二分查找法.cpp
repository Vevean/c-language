#include<stdio.h>
int Bsearch(int *p, int n, int x);    
int main(void)   
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};    
    int x, m;
    scanf("%d",&x);                
    m = Bsearch(a, 10, x);
    if(m >= 0)   
        printf("Index is %d\n",m);
    else 
        printf( "Not Found\n");
		
    return 0;
}
int Bsearch(int *p, int n, int x)
{
	int mid,i=0,j=n-1;
	while(i<=j)
	{
	mid=(i+j)/2;
	if(x==p[mid])
	{
		return mid;
	}else if(x>p[mid])
	{
		i=mid+1;
	}else{
		j=mid-1;
	}
	}
	return -1;
}
