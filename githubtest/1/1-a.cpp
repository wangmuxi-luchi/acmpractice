/*
���������ַ��󣬰����ַ���ASCII���С�����˳������������ַ���
Input
���������ж��飬ÿ��ռһ�У��������ַ���ɣ�֮���޿ո�
Output
����ÿ���������ݣ����һ�У��ַ��м���һ���ո�ֿ���
Sample Input
qwe
asd
zxc
Sample Output
e q w
a d s
c x z

*/ 
#include<stdio.h>
int main()
{
	char input[3];
	char tem;
	while(scanf("%s",input)!=EOF)
	{
		getchar();
		if(input[0]>input[1])
		{
			tem=input[0];
			input[0]=input[1];
			input[1]=tem;
		}
		if(input[0]>input[2])
		{
			tem=input[0];
			input[0]=input[2];
			input[2]=tem;
		}
		if(input[1]>input[2])
		{
			tem=input[1];
			input[1]=input[2];
			input[2]=tem;
		}
		printf("%c %c %c\n",input[0],input[1],input[2]);
		
	}
}
