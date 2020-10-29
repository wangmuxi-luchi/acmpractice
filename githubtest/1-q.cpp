/*
输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。
Input
输入数据有多组，每组占一行，每行的开始是一个整数n，
表示这个测试实例的数值的个数，跟着就是n个整数。n=0表示输入的结束，不做处理。
Output
对于每组输入数据，输出交换后的数列，每组输出占一行。
Sample Input
4 2 1 3 4
5 5 4 3 2 1
0
Sample Output
1 2 3 4
1 4 3 2 5
*/
#include<iostream>
using namespace std;
int main()
{
	int n,arr[100];
	while(cin>>n)
	{
		
		if(n)
		{
			int mindex=0;
			for(int i=0;i<n;i++)cin>>arr[i];
			for(int i=1;i<n;i++)if(arr[i]<arr[mindex])mindex=i;
			cout<<arr[mindex];
			arr[mindex]=arr[0];
			for(int i=1;i<n;i++)cout<<' '<<arr[i];
			cout<<endl;
		}

	}
}
