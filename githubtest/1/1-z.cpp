/*
���������ÿ���ַ������������е������ĸ���ڸ���ĸ��������ַ�����(max)����
Input
�������ݰ����������ʵ����ÿ��ʵ����һ�г��Ȳ�����100���ַ�����ɣ��ַ������ɴ�Сд��ĸ���ɡ�
Output
����ÿ������ʵ�����һ���ַ���������Ľ���ǲ����ַ�����(max)����Ľ����
������ڶ��������ĸ������ÿһ�������ĸ���涼����"(max)"��
Sample Input
abcdefgfedcba
xxxxx
Sample Output
abcdefg(max)fedcba
x(max)x(max)x(max)x(max)x(max)
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		char max='a';
		for(int i=0;str[i]!='\0';i++)
		{
			if(max<str[i])max=str[i];
		}
		for(int i=0;str[i]!='\0';i++)
		{
			printf("%c",str[i]);
			if(max==str[i])printf("(max)");
		}
		printf("\n");
	}
} 
