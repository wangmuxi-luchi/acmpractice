/*
����n�������������������������ĳ˻���
Input
�������ݰ����������ʵ����ÿ������ʵ��ռһ�У�ÿ�еĵ�һ����Ϊn����ʾ��������һ����n����������n������������Լ���ÿ�����ݱض����ٴ���һ��������
Output
���ÿ�����е����������ĳ˻������ڲ���ʵ�������һ�С�
Sample Input
3 1 2 3
4 2 3 4 5
Sample Output
3
15
*/ 
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	int num;
	while(cin>>num)
	{
		int ans=1;
		int* arr=(int*)malloc(sizeof(int)*num);
		int i=0;
		while(i<num)
		{
			cin>>arr[i];
			i++;
		}
		i--;
		for(;i>=0;i--)
		{
			if(arr[i]%2==1)ans*=arr[i];
		}
		cout<<ans<<endl;
		
	}
}
