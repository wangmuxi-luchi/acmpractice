/*
��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��
ÿ�����Ҳ��һͷСĸţ������ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
Input
���������ɶ������ʵ����ɣ�ÿ������ʵ��ռһ�У�����һ������n(0<n<55)��n�ĺ�������Ŀ��������
n=0��ʾ�������ݵĽ�������������
Output
����ÿ������ʵ��������ڵ�n���ʱ��ĸţ��������
ÿ�����ռһ�С�
Sample Input
2
4
5
0
Sample Output
2
4
6
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n!=0)
		{
			int a[]={1,2,3};
			int ans,i=2;
			if(n<3)ans=a[n-1];
			else
			while(++i<n){
				ans=a[0]+a[2];
				a[0]=a[1];
				a[1]=a[2];
				a[2]=ans;
			}
			printf("%d\n",ans);
		}
	}
	
} 










