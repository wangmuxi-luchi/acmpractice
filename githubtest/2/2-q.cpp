/*

网上流传一句话:"常在网上飘啊，哪能不挨刀啊～"。其实要想能安安心心地上网其实也不难，学点安全知识就可以。

首先，我们就要设置一个安全的密码。那什么样的密码才叫安全的呢？
一般来说一个比较安全的密码至少应该满足下面两个条件：

(1).密码长度大于等于8，且不要超过16。
(2).密码中的字符应该来自下面“字符类别”中四组中的至少三组。

这四个字符类别分别为：
1.大写字母：A,B,C...Z;
2.小写字母：a,b,c...z;
3.数字：0,1,2...9;
4.特殊符号：~,!,@,#,$,%,^;

给你一个密码，你的任务就是判断它是不是一个安全的密码。
Input
输入数据第一行包含一个数M，接下有M行，每行一个密码（长度最大可能为50），密码仅包括上面的四类字符。
Output
对于每个测试实例，判断这个密码是不是一个安全的密码，是的话输出YES，否则输出NO。
Sample Input
3
a1b2c3d4
Linle@ACM
^~^@^@!%
Sample Output
NO
YES
NO
*/


#include<iostream>
#include<string>
using namespace std;

int main()
{
	int m;
	cin>>m;
	while(m--)
	{
		string password;
		cin>>password;
		int tag[4]={0,0,0,0};
		if(password.length()>=8&&password.length()<=16)
		{
			for(int i=0;password[i]!='\0';i++)
			{
				if(password[i]>='A'&&password[i]<='Z')tag[0]++;
				else if(password[i]>='a'&&password[i]<='z')tag[1]++;
				else if(password[i]>='0'&&password[i]<='9')tag[2]++;
				else tag[3]++;
			}
			if((bool)tag[0]+(bool)tag[2]+(bool)tag[3]+(bool)tag[1]>2)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;
		
		
	}
}
