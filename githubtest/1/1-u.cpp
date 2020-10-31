/*
����n(n<=100)�����������վ���ֵ�Ӵ�С������������Ŀ��֤����ÿһ������ʵ�������е����ľ���ֵ������ȡ�
Input
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������Ϊn,������n��������n=0��ʾ�������ݵĽ�������������
Output
����ÿ������ʵ������������Ľ����������֮����һ���ո������ÿ������ʵ��ռһ�С�
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









