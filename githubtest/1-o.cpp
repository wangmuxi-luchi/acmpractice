/*
������ִ����У���ί�������ѡ�ִ�֡�ѡ�ֵ÷ֹ���Ϊȥ��һ����߷ֺ�һ����ͷ֣�
Ȼ�����ƽ���÷֣��������ĳѡ�ֵĵ÷֡�
Input
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������n(2<n<=100)����ʾ��ί��������Ȼ����n����ί�Ĵ�֡�
Output
����ÿ���������ݣ����ѡ�ֵĵ÷֣��������2λС����ÿ�����ռһ�С�
Sample Input
3 99 98 97
4 100 99 98 97
Sample Output
98.00
98.50
*/
#include<iostream>
using namespace std;
int main()
{
	int pw;
	while(cin>>pw)
	{
		double min=101,max=0,all=0;
		int num=pw-2;
		while(pw--)
		{
			int score;
			cin>>score;
			if(score>max)max=score;
			if(score<min)min=score;
			all+=score;
		}
		all=all-min-max;
		printf("%.2f\n",all/num);
		
	}
} 
