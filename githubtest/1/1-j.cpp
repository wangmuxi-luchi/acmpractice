/*
���еĶ������£�
���еĵ�һ��Ϊn���Ժ����Ϊǰһ���ƽ�����������е�ǰm��ĺ͡�
Input
���������ж��飬ÿ��ռһ�У�����������n��n<10000����m(m<1000)��ɣ�n��m�ĺ�����ǰ������
Output
����ÿ���������ݣ���������еĺͣ�ÿ������ʵ��ռһ�У�Ҫ�󾫶ȱ���2λС����
Sample Input
81 4
2 2
Sample Output
94.73
3.41
*/ 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double n;
	int num;
	while(cin>>n>>num)
	{
		double ans=0;
		while(num--)
		{
			ans+=n;
			n=sqrt(n);
		}
		printf("%.2f\n",ans);
	}

 } 
