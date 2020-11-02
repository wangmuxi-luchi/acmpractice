/*
还记得中学时候学过的杨辉三角吗？具体的定义这里不再描述，你可以参考以下的图形：
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
Input
输入数据包含多个测试实例，每个测试实例的输入只包含一个正整数n（1<=n<=30），表示将要输出的杨辉三角的层数。
Output
对应于每一个输入，请输出相应层数的杨辉三角，每一层的整数之间用一个空格隔开，每一个杨辉三角后面加一个空行。
Sample Input
2 3
Sample Output
1
1 1

1
1 1
1 2 1

*/
//这是注释
#include<iostream>
using namespace std;
int main()
{
	int a[15];
	int b[15];
	a[0]=1;
	int* tem,*arr1,*arr2;
	arr1=a;arr2=b;
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			int j=0;
			for(;j*2<i;j++)
			{
				if(j==0)arr2[j]=1;
				else if((j+1)*2>=i)arr2[j]=arr1[j-(i%2)]+arr1[j-1];
				else arr2[j]=arr1[j-1]+arr1[j];
				
			}
			j--;
			tem=arr2;arr2=arr1;arr1=tem;
			cout<<arr1[0];
			int k=0;
			while(++k<=j)cout<<' '<<arr1[k];
			if(i%2!=0)k--;
			while(--k>=0)cout<<' '<<arr1[k];
			cout<<endl;
			
			
		}
		cout<<endl;
	}
	
	
}
