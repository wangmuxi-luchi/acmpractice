/*
��n��������С��������
Input
��������������ʵ����ÿ������ʵ���Ŀ�ʼ��һ��������n��Ȼ����n����������
Output
Ϊÿ���������������ǵ���С��������ÿ������ʵ�������ռһ�С�
����Լ������������һ��32λ��������
Sample Input
2 4 6
3 2 5 7
Sample Output
12
70
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int ans=1;
		while(n--)
		{
			int num;
			cin>>num;
			int i; 
			for(i=num;i%num!=0||i%ans!=0;i++);
			ans=i;
			
		}
		printf("%d\n",ans);
	}
}
