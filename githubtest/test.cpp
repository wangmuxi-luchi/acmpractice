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
	for(int i=2;i*i<=n;i++)if(n%i==0)
	{
		cout<<'<'<<i<<'>';
		return false;
	}
	return true;
}
int main()
{
	for(int i=-39;i<51;i++)
	{
		int num;
		num=i*i+i+41;
		cout<<i<<"  "<<num<<"  "<<isnotpr(num)<<endl;
	}
}
















