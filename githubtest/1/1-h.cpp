/*
给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。
Input
输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成。
Output
对于每组输入数据，输出一行，应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。
你可以认为32位整数足以保存结果。
Sample Input
1 3
2 5
Sample Output
4 28
20 152
*/ 
#include<iostream>
using namespace std;
int main()
{
	int m,n;

	while(cin>>m>>n)
	{
		if(m>n){
			int i;
			i=m;
			m=n;
			n=i;
		}
		int ans[2]={0,0};
		for(;m<=n;m++)
		{
			if(m%2==0)ans[0]+=m*m;
			else ans[1]+=m*m*m;
		}
		cout<<ans[0]<<' '<<ans[1]<<endl;
	}
}
