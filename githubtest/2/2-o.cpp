/*
��һ¥�ݹ�M�����տ�ʼʱ���ڵ�һ������ÿ��ֻ�ܿ���һ���������Ҫ���ϵ�M�������ж������߷���
Input
�����������Ȱ���һ������N����ʾ����ʵ���ĸ�����Ȼ����N�����ݣ�ÿ�а���һ������M��1<=M<=40��,��ʾ¥�ݵļ�����
Output
����ÿ������ʵ�����������ͬ�߷�������
Sample Input
2
2
3
Sample Output
1
2
*/


#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		cin>>m;
		int step[41];
		step[1]=1;
		step[2]=1;
		for(int i=3;i<=m;i++)step[i]=step[i-1]+step[i-2];
		cout<<step[m]<<endl;
	}
}
