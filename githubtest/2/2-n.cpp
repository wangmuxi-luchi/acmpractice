/*

��ϣ����ѧ�ұϴ����˹����Ȼ���о��з��֣�220��������Լ��(�����������Լ��)֮��Ϊ��

1+2+4+5+10+11+20+22+44+55+110��284��

��284��������Լ��Ϊ1��2��4��71�� 142��������ǡ��Ϊ220�����Ƕ����������е��ܾ��棬����֮Ϊ�׺�����һ��ؽ���
������������κ�һ����������һ��������Լ��֮�ͣ����������������׺�����

�������ͱ�дһ�������жϸ������������Ƿ����׺���
Input
�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ��,������������A,B�� ���� 0 <= A,B <= 600000 ;
Output
����ÿ������ʵ�������A��B���׺����Ļ����YES���������NO��
Sample Input
2
220 284
100 200
Sample Output
YES
NO
*/
#include<iostream>
#include<typeinfo>
using namespace std;


int main() {
	int m;
	cin>>m;
	while(m--)
	{
		bool flag=true;
		int a,b;
		cin>>a>>b;
		int sum=1;
		for(int i=2;flag&&i*i<=a;i++)
		{
			if(a%i==0)sum=sum+i+a/i;
			if(sum>b)flag=false;
		}
		if(sum!=b)flag=false;
		sum=1;
		for(int i=2;flag&&i*i<=b;i++)
		{
			if(b%i==0)sum=sum+i+b/i;
			if(sum>a)flag=false;
		}
		if(sum!=a)flag=false;
		if(flag)printf("YES\n");
		else printf("NO\n");
	}
}
