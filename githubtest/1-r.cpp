/*
���ڸ�����һ���ַ�����ͳ�����������ַ����ֵĴ�����
Input
���������ж��У���һ����һ������n��
��ʾ����ʵ���ĸ������������n�У�ÿ�а���һ������ĸ��������ɵ��ַ�����
Output
����ÿ������ʵ��������ô�����ֵ�ĸ�����ÿ�����ռһ�С�
Sample Input
2
asdfasdf123123asdfasdf
asdf111111111asdfasdfasdf
Sample Output
6
9
*/
#include<iostream>
#include<string>
using namespace std;
int isnum(char c)
{
	if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0')return 1;
	else return 0;
}
int main()
{
	int num;
	cin>>num;
	while(num--)
	{
		string str;
		cin>>str;
		int ans=0;
		for(int i=0;str[i]!='\0';i++)ans+=isnum(str[i]);
		cout<<ans<<endl;
	}
	
}
