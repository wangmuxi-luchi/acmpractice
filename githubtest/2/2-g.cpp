/*
���ǵ���ѧʱ��ѧ������������𣿾���Ķ������ﲻ������������Բο����µ�ͼ�Σ�
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
Input
�������ݰ����������ʵ����ÿ������ʵ��������ֻ����һ��������n��1<=n<=30������ʾ��Ҫ�����������ǵĲ�����
Output
��Ӧ��ÿһ�����룬�������Ӧ������������ǣ�ÿһ�������֮����һ���ո������ÿһ��������Ǻ����һ�����С�
Sample Input
2 3
Sample Output
1
1 1

1
1 1
1 2 1

*/
//����ע��
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
