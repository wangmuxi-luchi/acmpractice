/*
��A^B�������λ����ʾ��������
˵����A^B�ĺ����ǡ�A��B�η���
Input
�������ݰ����������ʵ����ÿ��ʵ��ռһ�У�������������A��B��ɣ�1<=A,B<=10000�������A=0, B=0�����ʾ�������ݵĽ�������������
Output
����ÿ������ʵ���������A^B�������λ��ʾ��������ÿ�����ռһ�С�
Sample Input
2 3
12 6
6789 10000
0 0
Sample Output
8
984
1

*/
//����ע��
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b&&(a!=0||b!=0))
	{
		long ans = 1;
		for (int i = 0; i < b; i++)
		{
				ans *= a;
				ans%=1000;
		}
		cout << ans % 1000 << endl;
		
	}
}
