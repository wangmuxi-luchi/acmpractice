/*
��n(n<=100)���������Ѿ����մ�С����˳�����кã����������һ������x���뽫�������뵽�����У���ʹ�µ�������Ȼ����
Input
�������ݰ����������ʵ����ÿ��������������ɣ���һ����n��m��
�ڶ������Ѿ������n���������С�n��mͬʱΪ0��ʾ�������ݵĽ��������в�������
Output
����ÿ������ʵ������������µ�Ԫ�غ�����С�
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










