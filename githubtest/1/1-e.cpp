/*
输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
90~100为A;
80~89为B;
70~79为C;
60~69为D;
0~59为E;
Input
输入数据有多组，每组占一行，由一个整数组成。
Output
对于每组输入数据，输出一行。如果输入数据不在0~100范围内，请输出一行：“Score is error!”。
Sample Input
56
67
100
123
Sample Output
E
D
A
Score is error!
*/ 
#include<iostream>
using namespace std;
int main()
{
	int t;
	char l;
	while(cin>>t)
	{
		if(t>100||t<0)printf("Score is error!\n");
		else
		{
			if(t<60)l='E';
			else if(t<70)l='D';
			else if(t<80)l='C';
			else if(t<90)l='B';
			else l='A';
			printf("%c\n",l);
		}
	}
}
