/*
����һ���ٷ��Ƶĳɼ�t������ת���ɶ�Ӧ�ĵȼ�������ת���������£�
90~100ΪA;
80~89ΪB;
70~79ΪC;
60~69ΪD;
0~59ΪE;
Input
���������ж��飬ÿ��ռһ�У���һ��������ɡ�
Output
����ÿ���������ݣ����һ�С�����������ݲ���0~100��Χ�ڣ������һ�У���Score is error!����
Sample Input
56
67
100
123
Sample Output
E
D
A
Score is error!
*/ 
#include<iostream>
using namespace std;
int main()
{
	int t;
	char l;
	while(cin>>t)
	{
		if(t>100||t<0)printf("Score is error!\n");
		else
		{
			if(t<60)l='E';
			else if(t<70)l='D';
			else if(t<80)l='C';
			else if(t<90)l='B';
			else l='A';
			printf("%c\n",l);
		}
	}
}
