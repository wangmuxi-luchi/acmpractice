/*
��2��n��һ�������η�����,��һ��1�� 2�Ĺ�����������,����n ,����̷ŷ���������.
����n=3ʱ,Ϊ2�� 3���񣬹��Ƶ��̷ŷ���������,����ͼ��

Input
���������ɶ�����ɣ�ÿ�а���һ������n,��ʾ�ò���ʵ���ĳ����η���Ĺ����2��n (0<n<=50)��
Output
����ÿ������ʵ����������̷ŷ�����������ÿ��ʵ�������ռһ�С�
Sample Input
1
3
2
Sample Output
1
3
2
*/
#include<iostream>
using namespace std;


int main()
{
	long long int step[51];
	step[1]=1;
	step[2]=2;
	for(int i=3;i<=50;i++)step[i]=step[i-1]+step[i-2];
	int n;
	while(cin>>n)cout<<step[n]<<endl;
}

