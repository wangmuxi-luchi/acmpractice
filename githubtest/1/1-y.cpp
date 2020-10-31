/*
输入一个字符串，判断其是否是C的合法标识符。
Input
输入数据包含多个测试实例，数据的第一行是一个整数n,表示测试实例的个数，然后是n行输入数据，
每行是一个长度不超过50的字符串。
Output
对于每组输入数据，输出一行。如果输入数据是C的合法标识符，则输出"yes"，否则，输出“no”。
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
