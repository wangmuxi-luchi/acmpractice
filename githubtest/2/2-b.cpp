/*
ͳ��ÿ��Ԫ����ĸ���ַ����г��ֵĴ�����
Input
�����������Ȱ���һ������n��
��ʾ����ʵ���ĸ�����Ȼ����n�г��Ȳ�����100���ַ�����
Output
����ÿ������ʵ�����5�У���ʽ���£�
a:num1
e:num2
i:num3
o:num4
u:num5
�������ʵ��֮����һ�����и�����

���ر�ע�⣺���һ���������û�п��У���
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
