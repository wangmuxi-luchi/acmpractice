/*
��һֻ����ѵ�����۷�ֻ�������Ҳ����ڵķ䷿�����ܷ������С����̼����۷�ӷ䷿a�����䷿b�Ŀ���·������
���У��䷿�Ľṹ������ʾ��

Input
�������ݵĵ�һ����һ������N,��ʾ����ʵ���ĸ�����Ȼ����N �����ݣ�ÿ�а�����������a��b(0<a<b<50)��
Output
����ÿ������ʵ����������۷�ӷ䷿a�����䷿b�Ŀ���·������ÿ��ʵ�������ռһ�С�
Sample Input
2
1 2
3 6
Sample Output
1
3
*/
#include<iostream>
using namespace std;


int main()
{
	long long int step[51];
	step[1]=1;
	step[2]=1;
	for(int i=3;i<=50;i++)step[i]=step[i-1]+step[i-2];
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		cout<<step[b-a+1]<<endl;
	}
}

