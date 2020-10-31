/*
有n(n<=100)个整数，已经按照从小到大顺序排列好，现在另外给一个整数x，请将该数插入到序列中，并使新的序列仍然有序。
Input
输入数据包含多个测试实例，每组数据由两行组成，第一行是n和m，
第二行是已经有序的n个数的数列。n和m同时为0标示输入数据的结束，本行不做处理。
Output
对于每个测试实例，输出插入新的元素后的数列。
Sample Input
7 3
1 2 4 7 8 9 10
0 0
Sample Output
1 2 3 4
*/
#include<iostream>
using namespace std;
int main()
{
	int arr[101];
	int n,m;
	while(cin>>n>>m)
	{
		if(n!=0||m!=0)
		{
			bool flag=true;
			for(int i=0;i<n;i++)cin>>arr[i];
			for(int i=0;i<n;i++)
			{
				if(i!=0)printf(" ");
				if(arr[i]<m||flag==false)
				{
					printf("%d",arr[i]);
				}
				else
				{
					flag=false;
					printf("%d %d",m,arr[i]);
				}
			}
			if(flag)printf(" %d",m);
			printf("\n");
		}
	}
} 










