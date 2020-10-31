/*
有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，
每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
Input
输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。
Output
对于每个测试实例，输出在第n年的时候母牛的数量。
每个输出占一行。
Sample Input
2
4
5
0
Sample Output
2
4
6
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n!=0)
		{
			int a[]={1,2,3};
			int ans,i=2;
			if(n<3)ans=a[n-1];
			else
			while(++i<n){
				ans=a[0]+a[2];
				a[0]=a[1];
				a[1]=a[2];
				a[2]=ans;
			}
			printf("%d\n",ans);
		}
	}
	
} 










