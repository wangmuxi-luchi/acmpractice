//question
/*����ʽ���������£�
1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
������������ö���ʽ��ǰn��ĺ͡�
Input
����������2����ɣ�������һ��������m��m<100������ʾ����ʵ���ĸ������ڶ��а���m����������
����ÿһ������(������Ϊn,n<1000������ö���ʽ��ǰn��ĺ͡�
Output
����ÿ������ʵ��n��Ҫ���������ʽǰn��ĺ͡�ÿ������ʵ�������ռһ�У��������2λС����
Sample Input
2
1 2
Sample Output
1.00
0.50
*/
#include<iostream>
using namespace std;
int main()
{

	int num;
	cin>>num;
	while(num--)
	{
		double ans=0;
		int n;

		cin>>n;
		int flag=1;
		for(int i=1;i<=n;i++)
		{
			ans+=((1/(double)i)*flag);
			flag*=-1;
		}
		printf("%.2f\n",ans);
	}
}

















