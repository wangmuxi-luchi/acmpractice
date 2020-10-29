/*
对于给定的一个字符串，统计其中数字字符出现的次数。
Input
输入数据有多行，第一行是一个整数n，
表示测试实例的个数，后面跟着n行，每行包括一个由字母和数字组成的字符串。
Output
对于每个测试实例，输出该串中数值的个数，每个输出占一行。
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
