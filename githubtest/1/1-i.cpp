/*
ͳ�Ƹ�����n�����У���������������ĸ�����
Input
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ����������n��n<100������ʾ��Ҫͳ�Ƶ���ֵ�ĸ�����Ȼ����n��ʵ�������n=0�����ʾ������������в�������
Output
����ÿ���������ݣ����һ��a,b��c���ֱ��ʾ�����������и�������������ĸ�����
Sample Input
6 0 1 2 3 -1 0
5 1 2 3 4 0.5
0 
Sample Output
1 2 3
0 0 5
*/ 
#include<iostream>
using namespace std;
int main()
{
	int num;
	while(cin>>num)
	{
		if(num==0)break;
		int a=0,b=0,c=0;
		while(num--)
		{
			float input;
			cin>>input;
			if(input<0)a++;
			else if(input==0)b++;
			else c++;
		}
		printf("%d %d %d\n",a,b,c);
	}
 } 
