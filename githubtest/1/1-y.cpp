/*
����һ���ַ������ж����Ƿ���C�ĺϷ���ʶ����
Input
�������ݰ����������ʵ�������ݵĵ�һ����һ������n,��ʾ����ʵ���ĸ�����Ȼ����n���������ݣ�
ÿ����һ�����Ȳ�����50���ַ�����
Output
����ÿ���������ݣ����һ�С��������������C�ĺϷ���ʶ���������"yes"�����������no����
Sample Input
3
12ajf
fi8x_a
ff  ai_2
Sample Output
no
yes
no
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int num;
	cin>>num;
	getchar();
	while(num--)
	{
		
		getline(cin,str);
		if((str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')||str[0]=='_')
		{
			bool flag=true;
			for(int i=1;str[i]!='\0'&&flag;i++)
			{
				if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||str[i]=='_'))
				flag=false;
			}
			if(flag)printf("yes\n");
			else printf("no\n");
		}
		else printf("no\n");
	}
	
}
