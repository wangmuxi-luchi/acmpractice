/*
��ʵ���ľ���ֵ��
Input
���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ����
Output
����ÿ���������ݣ�������ľ���ֵ��Ҫ��ÿ���������һ�У����������λС����
Sample Input
123
-234.00
Sample Output
123.00
234.00
*/ 
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double num;
	while(cin>>num)
	{
		if(num<0)num=num*-1;
		printf("%.2f\n",num);
	}

}
