/*
�����������꣨X1,Y1��,��X2,Y2��,���㲢��������ľ��롣
Input
���������ж��飬ÿ��ռһ�У���4��ʵ����ɣ��ֱ��ʾx1,y1,x2,y2,����֮���ÿո������
Output
����ÿ���������ݣ����һ�У����������λС����
Sample Input
0 0 0 1
0 1 1 0
Sample Output
1.00
1.41

*/ 
#include<iostream> 
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
	double x[2],y[2];
	while(cin>>x[0]>>y[0]>>x[1]>>y[1])
	{
		printf("%.2f\n",pow(pow(x[0]-x[1],2)+pow(y[0]-y[1],2),0.5));
	}
}
