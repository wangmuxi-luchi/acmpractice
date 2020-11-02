/*
统计每个元音字母在字符串中出现的次数。
Input
输入数据首先包括一个整数n，
表示测试实例的个数，然后是n行长度不超过100的字符串。
Output
对于每个测试实例输出5行，格式如下：
a:num1
e:num2
i:num3
o:num4
u:num5
多个测试实例之间由一个空行隔开。

请特别注意：最后一块输出后面没有空行：）
Sample Input
2
aeiou
my name is ignatius
Sample Output
a:1
e:1
i:1
o:1
u:1

a:2
e:1
i:3
o:0
u:1
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int n;
	cin>>n;
	while(n--)
	{
		int num[5]={0};
		while(true)
		{
			cin>>str;
			for(int i=0;str[i]!='\0';i++)
			{
				switch(str[i])
				{
					case 'a':num[0]++;break;
					case 'e':num[1]++;break;
					case 'i':num[2]++;break;
					case 'o':num[3]++;break;
					case 'u':num[4]++;break;
					default:break;					
				}

			}
			char i;
			i=getchar();
			if(i=='\n')
			{
				printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",num[0],num[1],num[2],num[3],num[4]);
				break;
			}
			
		}
		if(n!=0)printf("\n");
	}
}
