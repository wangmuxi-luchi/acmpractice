/*
求n个数的最小公倍数。
Input
输入包含多个测试实例，每个测试实例的开始是一个正整数n，然后是n个正整数。
Output
为每组测试数据输出它们的最小公倍数，每个测试实例的输出占一行。
你可以假设最后的输出是一个32位的整数。
Sample Input
2 4 6
3 2 5 7
Sample Output
12
70
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int ans=1;
		while(n--)
		{
			int num;
			cin>>num;
			int i; 
			for(i=num;i%num!=0||i%ans!=0;i++);
			ans=i;
			
		}
		printf("%d\n",ans);
	}
}
