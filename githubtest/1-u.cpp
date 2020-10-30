/*
输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。
Input
输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，n=0表示输入数据的结束，不做处理。
Output
对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行。
Sample Input
3 3 -4 2
4 0 1 2 -3
10 9 8 7 6 5 4 11 2 1 0
1 0
2 71 90
4 -3 9 -6 -4 
5 2 3 5 6 7
0
Sample Output
-4 3 2
-3 2 1 0
*/
#include<iostream>
using namespace std;
bool isbigger(int a,int b)
{
	if(a<0)a*=-1;
	if(b<0)b*=-1;
	if(a>b)return true;
	return false;
}
void insert(int* ar,int i,int j)
{
	int tem=ar[i];
	for(;i>j;i--)
	{
		ar[i]=ar[i-1];
	}
	ar[j]=tem;
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n!=0)
		{
			int arr[100];
			int tem;
			for(int i=0;i<n;i++)cin>>arr[i];
			for(int i=1;i<n;i++)
				for(int j=0;j<i;j++)
				{
					if(isbigger(arr[i],arr[j]))
					{
						insert(arr,i,j);
						break;
					}
				}
			for(int i=0;i<n;i++)
			{
				if(i!=0)printf(" ");
				printf("%d",arr[i]);
			}
			printf("\n");			
		}
	}
}









