/*
����һ��Ӣ�ľ��ӣ���ÿ�����ʵĵ�һ����ĸ�ĳɴ�д��ĸ��
Input
�������ݰ����������ʵ����ÿ������ʵ����һ�����Ȳ�����100��Ӣ�ľ��ӣ�ռһ�С�
Output
���������Ҫ���д���Ӣ�ľ��ӡ�
Sample Input
i like acm
i want to get an accepted
Sample Output
I Like Acm
I Want To Get An Accepted
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		str[0]=char(str[0]-32);
		cout<<str;
		char c;
		c=getchar();
		cout<<c;
	}
}
