/*
�����Ĵ�����һ�������ͷ�����һ�����ַ��������硰level�����ߡ�noon��
�ȵȾ��ǻ��Ĵ�����дһ�������ж϶�����ַ����Ƿ��ǡ����ġ���
Input
��������������ʵ�����������ݵĵ�һ����һ��������n,
��ʾ����ʵ���ĸ����������������n���ַ�����
Output
���һ���ַ����ǻ��Ĵ��������"yes",�������"no".
Sample Input
4
level
abcde
noon
haha
Sample Output
yes
no
yes
no
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string str;
		cin>>str;
		int i=0;
		for(;str[i]!='\0';i++);
		i--;
		bool flag=true;
		for(int j=0;j<i&&flag;j++,i--)if(str[i]!=str[j])flag=false;
		if(flag)printf("yes\n");
		else printf("no\n");
	}
}
