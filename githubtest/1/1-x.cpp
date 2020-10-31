//question
/*
����һ������n(n<=50)��ѧ����ÿ�˿�m(m<=5)�ſΣ���ÿ��ѧ����ƽ���ɼ���ÿ�ſε�ƽ���ɼ�����������Ƴɼ������ڵ���ƽ���ɼ���ѧ��������
Input
���������ж������ʵ����ÿ������ʵ���ĵ�һ�а�����������n��m���ֱ��ʾѧ�����Ϳγ�����Ȼ����n�����ݣ�ÿ�а���m���������������Է�������
Output
����ÿ������ʵ�������3�����ݣ���һ�а���n�����ݣ���ʾn��ѧ����ƽ���ɼ������������λС�����ڶ��а���m�����ݣ���ʾm�ſε�ƽ���ɼ���
���������λС������������һ����������ʾ�ð༶�и��Ƴɼ������ڵ���ƽ���ɼ���ѧ��������
ÿ������ʵ�������һ�����С�
Sample Input
2 2 
5 10
10 20
Sample Output
7.50 15.00
7.50 15.00
1
*/
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		double arr[50][5],stu[50]={0},sub[5]={0};
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
			}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				stu[i]+=arr[i][j];
				sub[j]+=arr[i][j];
			}
		}
		
		
		
		printf("%.2f",stu[0]/m);
		for(int i=1;i<n;i++)printf(" %.2f",stu[i]/m);
		
		sub[0]=sub[0]/n;
		printf("\n%.2f",sub[0]);
		for(int j=1;j<m;j++)
		{
			sub[j]=sub[j]/n;
			printf(" %.2f",sub[j]);
		}
		
		int count=0;
		for(int i=0;i<n;i++)
		{
			bool flag=true;
			for(int j=0;j<m&&flag;j++)if(arr[i][j]<sub[j])flag=false;
			count+=flag;
		}
		printf("\n%d\n\n",count);	
	}
}














