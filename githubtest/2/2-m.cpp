/*
���������ߣ������ж�һ���ܲ������һ�������Ρ�
Input
�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ����������������A,B,C������A,B,C <1000;
Output
����ÿ������ʵ������������߳�A,B,C����������εĻ������YES������NO��
Sample Input
2
1 2 3
2 2 2
Sample Output
NO
YES
*/


#include<iostream>
using namespace std;

void exchange(int* a,int* b)
{
	int tem;
	tem=*b;
	*b=*a;
	*a=tem;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b,c,tem;
		cin>>a>>b>>c;
		if(a<b)exchange(&a,&b);
		if(a<c)exchange(&a,&c);
		if(b<c)exchange(&b,&c);
		
		if(c<=0)printf("NO\n");
		else if(b+c>a)printf("YES\n");
		else printf("NO\n");
	}
}
