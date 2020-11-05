/*
在2×n的一个长方形方格中,用一个1× 2的骨牌铺满方格,输入n ,输出铺放方案的总数.
例如n=3时,为2× 3方格，骨牌的铺放方案有三种,如下图：

Input
输入数据由多行组成，每行包含一个整数n,表示该测试实例的长方形方格的规格是2×n (0<n<=50)。
Output
对于每个测试实例，请输出铺放方案的总数，每个实例的输出占一行。
Sample Input
1
3
2
Sample Output
1
3
2
*/
#include<iostream>
using namespace std;


int main()
{
	long long int step[51];
	step[1]=1;
	step[2]=2;
	for(int i=3;i<=50;i++)step[i]=step[i-1]+step[i-2];
	int n;
	while(cin>>n)cout<<step[n]<<endl;
}

