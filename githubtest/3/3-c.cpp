/*
Give you two numbers A and B, if A is equal to B, you should print "YES", or print "NO".
Input
each test case contains two numbers A and B.
Output
for each case, if A is equal to B, you should print "YES", or print "NO".
Sample Input
1 2
2 2
3 3
4 3
Sample Output
NO
YES
YES
NO
*/
#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string n,m;
	while(cin>>n>>m)
	{
		int i=0,j=0;
		while(n[i]=='0')i++;
		while(m[j]=='0')j++;
		while(m[j]!='\0'&&n[i]!='\0'&&m[j]==n[i]&&m[j]!='.'&&n[i]!='.')//ȥ��ǰ��0 
		{
			i++;j++;
		}
		
		
		if(m[j]!='\0'&&n[i]!='\0')//��������ȵ�Ԫ�ػ���С���� 
		{
			if(m[j]!=n[i])cout<<"NO"<<endl;//���������������ֲ�ͬ 
			else
			{
				while(m[j]!='\0'&&n[i]!='\0'&&m[j]==n[i])//����������ͬ����������һ����ͬ��С�� 
				{
					i++;j++;
				}
				if(m[j]!='\0'&&n[i]!='\0')cout<<"NO"<<endl;//������С�����ֲ�ͬ 
				else//����һ��������ȥ����һ������ĩβ��Ч0 
				{
					while(m[j]=='0')j++;
					while(n[i]=='0')i++;
					if(m[j]==n[i])cout<<"YES"<<endl;//��һ����ĩβȫ��0 
					else cout<<"NO"<<endl; // ��һ����ĩβ�з�0�� 
				}

			}
		}
		else if(m[j]=='\0'&&n[i]=='\0')cout<<"YES"<<endl;//��С���㣬������������ 
		else if(m[j]!='.'&&n[j]!='.')cout<<"NO"<<endl;//�������������֣���һ���ѽ���������� 
		else//һ���ѽ�������һ������С���� 
		{
			if(m[j]=='.')//����12�м��δ��������С�������Ƿ�ȫΪ0 
			{
				j++;
				while(m[j]=='0')j++;
			}
			if(n[i]=='.')
			{
				i++;
				while(n[i]=='0')i++;
			}
			if(m[j]==n[i])cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		
		

	}
}
