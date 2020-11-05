/*

古希腊数学家毕达哥拉斯在自然数研究中发现，220的所有真约数(即不是自身的约数)之和为：

1+2+4+5+10+11+20+22+44+55+110＝284。

而284的所有真约数为1、2、4、71、 142，加起来恰好为220。人们对这样的数感到很惊奇，并称之为亲和数。一般地讲，
如果两个数中任何一个数都是另一个数的真约数之和，则这两个数就是亲和数。

你的任务就编写一个程序，判断给定的两个数是否是亲和数
Input
输入数据第一行包含一个数M，接下有M行，每行一个实例,包含两个整数A,B； 其中 0 <= A,B <= 600000 ;
Output
对于每个测试实例，如果A和B是亲和数的话输出YES，否则输出NO。
Sample Input
2
220 284
100 200
Sample Output
YES
NO
*/
#include<iostream>
#include<typeinfo>
using namespace std;


int main() {
	int m;
	cin>>m;
	while(m--)
	{
		bool flag=true;
		int a,b;
		cin>>a>>b;
		int sum=1;
		for(int i=2;flag&&i*i<=a;i++)
		{
			if(a%i==0)sum=sum+i+a/i;
			if(sum>b)flag=false;
		}
		if(sum!=b)flag=false;
		sum=1;
		for(int i=2;flag&&i*i<=b;i++)
		{
			if(b%i==0)sum=sum+i+b/i;
			if(sum>a)flag=false;
		}
		if(sum!=a)flag=false;
		if(flag)printf("YES\n");
		else printf("NO\n");
	}
}
