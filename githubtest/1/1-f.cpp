/*
����һ�����ڣ������������Ǹ���ĵڼ��졣
Input
���������ж��飬ÿ��ռһ�У����ݸ�ʽΪYYYY/MM/DD��ɣ�����μ�sample input ,���⣬��������ȷ�����е����������ǺϷ��ġ�
Output
����ÿ���������ݣ����һ�У���ʾ�������Ǹ���ĵڼ��졣
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
