/*
输入一个英文句子，将每个单词的第一个字母改成大写字母。
Input
输入数据包含多个测试实例，每个测试实例是一个长度不超过100的英文句子，占一行。
Output
请输出按照要求改写后的英文句子。
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
