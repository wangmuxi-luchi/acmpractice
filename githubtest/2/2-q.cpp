/*

��������һ�仰:"��������Ʈ�������ܲ���������"����ʵҪ���ܰ������ĵ�������ʵҲ���ѣ�ѧ�㰲ȫ֪ʶ�Ϳ��ԡ�

���ȣ����Ǿ�Ҫ����һ����ȫ�����롣��ʲô��������Žа�ȫ���أ�
һ����˵һ���Ƚϰ�ȫ����������Ӧ��������������������

(1).���볤�ȴ��ڵ���8���Ҳ�Ҫ����16��
(2).�����е��ַ�Ӧ���������桰�ַ�����������е��������顣

���ĸ��ַ����ֱ�Ϊ��
1.��д��ĸ��A,B,C...Z;
2.Сд��ĸ��a,b,c...z;
3.���֣�0,1,2...9;
4.������ţ�~,!,@,#,$,%,^;

����һ�����룬�����������ж����ǲ���һ����ȫ�����롣
Input
�������ݵ�һ�а���һ����M��������M�У�ÿ��һ�����루����������Ϊ50�����������������������ַ���
Output
����ÿ������ʵ�����ж���������ǲ���һ����ȫ�����룬�ǵĻ����YES���������NO��
Sample Input
3
a1b2c3d4
Linle@ACM
^~^@^@!%
Sample Output
NO
YES
NO
*/


#include<iostream>
#include<string>
using namespace std;

int main()
{
	int m;
	cin>>m;
	while(m--)
	{
		string password;
		cin>>password;
		int tag[4]={0,0,0,0};
		if(password.length()>=8&&password.length()<=16)
		{
			for(int i=0;password[i]!='\0';i++)
			{
				if(password[i]>='A'&&password[i]<='Z')tag[0]++;
				else if(password[i]>='a'&&password[i]<='z')tag[1]++;
				else if(password[i]>='0'&&password[i]<='9')tag[2]++;
				else tag[3]++;
			}
			if((bool)tag[0]+(bool)tag[2]+(bool)tag[3]+(bool)tag[1]>2)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;
		
		
	}
}
