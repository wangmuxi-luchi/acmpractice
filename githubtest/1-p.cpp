/*
��һ������Ϊn(n<=100)�����У������ж���Ϊ��2��ʼ�ĵ�������ż��������Ҫ���㰴��˳��ÿm�������һ��ƽ��ֵ��
��������m��������ʵ��������ƽ��ֵ����������ƽ��ֵ���С�
Input
���������ж��飬ÿ��ռһ�У���������������n��m��n��m�ĺ�������������
Output
����ÿ���������ݣ����һ��ƽ��ֵ���У�ÿ�����ռһ�С�
Sample Input
3 2
4 2
Sample Output
3 6
3 7
*/
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int start=2;
		while(m<=n)
		{
			if(start!=2)cout<<' ';
			cout<<start+m-1;
			start=start+2*m;
			n-=m;
		}
		if(n!=0)cout<<' '<<start+n-1<<endl;
		else cout<<endl;
	}
	
}
