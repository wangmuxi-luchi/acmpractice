/*
统计给定的n个数中，负数、零和正数的个数。
Input
输入数据有多组，每组占一行，每行的第一个数是整数n（n<100），表示需要统计的数值的个数，然后是n个实数；如果n=0，则表示输入结束，该行不做处理。
Output
对于每组输入数据，输出一行a,b和c，分别表示给定的数据中负数、零和正数的个数。
Sample Input
6 0 1 2 3 -1 0
5 1 2 3 4 0.5
0 
Sample Output
1 2 3
0 0 5
*/ 
#include<iostream>
using namespace std;
int main()
{
	int num;
	while(cin>>num)
	{
		if(num==0)break;
		int a=0,b=0,c=0;
		while(num--)
		{
			float input;
			cin>>input;
			if(input<0)a++;
			else if(input==0)b++;
			else c++;
		}
		printf("%d %d %d\n",a,b,c);
	}
 } 
