/*
输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
Input
输入数据有多组，每组占一行，有三个字符组成，之间无空格。
Output
对于每组输入数据，输出一行，字符中间用一个空格分开。
Sample Input
qwe
asd
zxc
Sample Output
e q w
a d s
c x z

*/ 
#include<stdio.h>
int main()
{
	char input[3];
	char tem;
	while(scanf("%s",input)!=EOF)
	{
		getchar();
		if(input[0]>input[1])
		{
			tem=input[0];
			input[0]=input[1];
			input[1]=tem;
		}
		if(input[0]>input[2])
		{
			tem=input[0];
			input[0]=input[2];
			input[2]=tem;
		}
		if(input[1]>input[2])
		{
			tem=input[1];
			input[1]=input[2];
			input[2]=tem;
		}
		printf("%c %c %c\n",input[0],input[1],input[2]);
		
	}
}
