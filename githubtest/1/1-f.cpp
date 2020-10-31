/*
给定一个日期，输出这个日期是该年的第几天。
Input
输入数据有多组，每组占一行，数据格式为YYYY/MM/DD组成，具体参见sample input ,另外，可以向你确保所有的输入数据是合法的。
Output
对于每组输入数据，输出一行，表示该日期是该年的第几天。
Sample Input
1985/1/20
2006/3/12
Sample Output
20
71
*/ 
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int y,m,d,day;
	int mond[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
	{
		day=0;
		if((y%100!=0&&y%4==0)||y%400==0)mond[2]=29;
		else mond[2]=28;
		for(int i=1;i<m;i++)day+=mond[i];
		day+=d;
		printf("%d\n",day);
		
	}
}
