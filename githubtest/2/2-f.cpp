/*
����һ��ʮ������N������ת����R�����������
Input
�������ݰ����������ʵ����ÿ������ʵ��������������N(32λ����)��R��2<=R<=16, R<>10����
Output
Ϊÿ������ʵ�����ת���������ÿ�����ռһ�С����R����10�����Ӧ�����ֹ���ο�16���ƣ����磬10��A��ʾ���ȵȣ���
Sample Input
7 2
23 12
-4 3
Sample Output
111
1B
-11

*/
//����ע��
#include<iostream>
using namespace std;
int main()
{
	int n,r;
	while(cin>>n>>r)
	{
		char ans[33];
		int i=0;
		bool flag=false;
		if(n<0)
		{
			flag=true;
			n=-1*n;
		}
		while(n)
		{
			switch(n%r)
			{
				case 0:ans[i]='0';break;
				case 1:ans[i]='1';break;
				case 2:ans[i]='2';break;
				case 3:ans[i]='3';break;
				case 4:ans[i]='4';break;
				case 5:ans[i]='5';break;
				case 6:ans[i]='6';break;
				case 7:ans[i]='7';break;
				case 8:ans[i]='8';break;
				case 9:ans[i]='9';break;
				case 10:ans[i]='A';break;
				case 11:ans[i]='B';break;
				case 12:ans[i]='C';break;
				case 13:ans[i]='D';break;
				case 14:ans[i]='E';break;
				case 15:ans[i]='F';break;
				default :break;
			}
			i++;
			n/=r;
		}
		if(flag)cout<<'-';
		while(--i>-1)cout<<ans[i];
		cout<<endl;
	}
	

}

