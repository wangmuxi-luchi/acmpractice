/*
ͳ�Ƹ����ı��ļ��к��ֵĸ�����
Input
�����ļ����Ȱ���һ������n����ʾ����ʵ���ĸ�����Ȼ����n���ı���
Output
����ÿһ���ı���������еĺ��ֵĸ�����ÿ������ʵ�������ռһ�С�

[Hint:]�Ӻ��ֻ�������ص㿼��~

Sample Input
2
WaHaHa! WaHaHa! ������ڲ�˵��Ҫ˵ֻ˵��ͨ��WaHaHa! WaHaHa!
���Ͼ�Ҫ��ĩ������Are you ready?
Sample Output
14
9

*/
//����ע��
#include<iostream>
#include<string>
using namespace std;
bool check(char in)
{
	if((int)in<0)return 1;
	else return 0;
}
int main()
{
	int n;
	cin>>n;
	getchar();
	while(n--) 
	{
		string str;
		getline(cin,str);
		int ans=0;
		for(int i=0;str[i]!='\0';i++)ans+=check(str[i]);
		cout<<ans/2<<endl;

	}
	

}

