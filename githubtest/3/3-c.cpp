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
		while(m[j]!='\0'&&n[i]!='\0'&&m[j]==n[i]&&m[j]!='.'&&n[i]!='.')//去除前导0 
		{
			i++;j++;
		}
		
		
		if(m[j]!='\0'&&n[i]!='\0')//遇到不相等的元素或者小数点 
		{
			if(m[j]!=n[i])cout<<"NO"<<endl;//两个数字整数部分不同 
			else
			{
				while(m[j]!='\0'&&n[i]!='\0'&&m[j]==n[i])//整数部分相同，遍历到第一个不同的小数 
				{
					i++;j++;
				}
				if(m[j]!='\0'&&n[i]!='\0')cout<<"NO"<<endl;//两个数小数部分不同 
				else//其中一个结束，去除另一个数的末尾无效0 
				{
					while(m[j]=='0')j++;
					while(n[i]=='0')i++;
					if(m[j]==n[i])cout<<"YES"<<endl;//另一个数末尾全是0 
					else cout<<"NO"<<endl; // 另一个数末尾有非0数 
				}

			}
		}
		else if(m[j]=='\0'&&n[i]=='\0')cout<<"YES"<<endl;//无小数点，两个数均结束 
		else if(m[j]!='.'&&n[j]!='.')cout<<"NO"<<endl;//其中在整数部分，另一个已结束，不相等 
		else//一个已结束，另一个遇到小数点 
		{
			if(m[j]=='.')//下面12行检测未结束的数小数部分是否全为0 
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
