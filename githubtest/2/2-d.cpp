/*
“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”
等等就是回文串。请写一个程序判断读入的字符串是否是“回文”。
Input
输入包含多个测试实例，输入数据的第一行是一个正整数n,
表示测试实例的个数，后面紧跟着是n个字符串。
Output
如果一个字符串是回文串，则输出"yes",否则输出"no".
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
