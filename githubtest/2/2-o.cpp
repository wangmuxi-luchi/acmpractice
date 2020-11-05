/*
有一楼梯共M级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第M级，共有多少种走法？
Input
输入数据首先包含一个整数N，表示测试实例的个数，然后是N行数据，每行包含一个整数M（1<=M<=40）,表示楼梯的级数。
Output
对于每个测试实例，请输出不同走法的数量
Sample Input
2
2
3
Sample Output
1
2
*/


#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		cin>>m;
		int step[41];
		step[1]=1;
		step[2]=1;
		for(int i=3;i<=m;i++)step[i]=step[i-1]+step[i-2];
		cout<<step[m]<<endl;
	}
}
