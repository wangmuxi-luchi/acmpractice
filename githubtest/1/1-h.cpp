/*
����һ���������������������������ż����ƽ�����Լ����������������͡�
Input
�������ݰ����������ʵ����ÿ�����ʵ������һ�У�����������m��n��ɡ�
Output
����ÿ���������ݣ����һ�У�Ӧ������������x��y���ֱ��ʾ�ö�����������������ż����ƽ�����Լ����������������͡�
�������Ϊ32λ�������Ա�������
Sample Input
1 3
2 5
Sample Output
4 28
20 152
*/ 
#include<iostream>
using namespace std;
int main()
{
	int m,n;

	while(cin>>m>>n)
	{
		if(m>n){
			int i;
			i=m;
			m=n;
			n=i;
		}
		int ans[2]={0,0};
		for(;m<=n;m++)
		{
			if(m%2==0)ans[0]+=m*m;
			else ans[1]+=m*m*m;
		}
		cout<<ans[0]<<' '<<ans[1]<<endl;
	}
}
