/*
����n(n<100)�������ҳ�������С��������������ǰ����������������Щ����
Input
���������ж��飬ÿ��ռһ�У�ÿ�еĿ�ʼ��һ������n��
��ʾ�������ʵ������ֵ�ĸ��������ž���n��������n=0��ʾ����Ľ�������������
Output
����ÿ���������ݣ��������������У�ÿ�����ռһ�С�
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
