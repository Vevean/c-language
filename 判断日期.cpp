#include <stdio.h>
void month_day ( int year, int yearday, int * pmonth, int * pday);
int main (void)
{
   int day, month, year, yearday; /*  ��������ա��¡���������ı���*/
   scanf ("%d%d", &year, &yearday );		
   month_day (year, yearday, &month, &day );/* ���ü����¡��պ���  */ 
   printf ("%d %d %d\n", year, month, day );	
   return 0;	
}

void month_day(int year,int yearday,int *pmonth,int *pday)
{
	int i,j;
	int aa[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	i=(year%400==0||(year%4==0&&year%100!=0));//����ƽ��������� 
	for(j=1;yearday>aa[i][j];j++)//�������� 
	yearday-=aa[i][j];
	*pmonth=j;
	*pday=yearday;
}
