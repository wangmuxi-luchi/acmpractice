//question
/*
���ڱ��ʽn^2+n+41����n�ڣ�x,y����Χ��ȡ����ֵʱ������x,y��(-39<=x<y<=50)���ж��ñ��ʽ��ֵ�Ƿ�Ϊ������
Input
���������ж��飬ÿ��ռһ�У�����������x��y��ɣ���x=0,y=0ʱ����ʾ������������в�������
Output
����ÿ��������Χ�ڵ�ȡֵ��������ʽ��ֵ��Ϊ�����������"OK",�����������Sorry��,ÿ�����ռһ�С�
Sample Input
0 1
0 0
Sample Output
OK
*/
#include<iostream>
using namespace std;
bool isnotpr(int n)
{
	for(int i=2;i*i<=n;i++)if(n%i==0)return true;
	return false;
}
int main()
{
	int x,y;
	
	while(cin>>x>>y)
	{
		if(x!=0||y!=0)
		{
			bool flag=true;
			for(int i=x;i<=y;i++)
			{
				int num;
				num=i*i+i+41;
				if(isnotpr(num))
				{
					printf("Sorry\n");
					flag=false;
					break;
				}
			}
			if(flag)printf("OK\n");
		}
	}
}
















