/*
��������İ뾶ֵ��������������
Input
���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ������ʾ��İ뾶��
Output
�����Ӧ��������������ÿ���������ݣ����һ�У�������������λС����
Sample Input
1
1.5
Sample Output
4.189
14.137


        
  
Hint
#define PI 3.1415927

*/ 
#define PI 3.1415927
#include<iostream> 
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	double r;
	while(cin>>r)
	{
		printf("%.3f\n",4*PI*pow(r,3)/3);
	}
}
