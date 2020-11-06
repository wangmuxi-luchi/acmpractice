/*
There must be many A + B problems in our HDOJ , now a new one is coming.
Give you two hexadecimal integers , your task is to calculate the sum of them,
and print it in hexadecimal too.
Easy ? AC it !
Input
The input contains several test cases, please process to the end of the file.
Each case consists of two hexadecimal integers A and B in a line seperated by a blank.
The length of A and B is less than 15.
Output
For each test case,print the sum of A and B in hexadecimal in one line.
Sample Input
+A -A
+1A 12
1A -9
-1A -12
1A -AA
Sample Output
0
2C
11
-2C
-90
*/
#include<iostream>
#include<string>
using namespace std;
long long int stn(string str)
{
	int i=0;
	int flag=1;
	long long int num=0;
	if(str[i]=='+')i++;
	else if(str[i]=='-'){
		i++;
		flag=-1;
	}
	
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case '0':num=num*16;break;
			case '1':num=num*16+1;break;
			case '2':num=num*16+2;break;
			case '3':num=num*16+3;break;
			case '4':num=num*16+4;break;
			case '5':num=num*16+5;break;
			case '6':num=num*16+6;break;
			case '7':num=num*16+7;break;
			case '8':num=num*16+8;break;
			case '9':num=num*16+9;break;
			case 'A':num=num*16+10;break;
			case 'B':num=num*16+11;break;
			case 'C':num=num*16+12;break;
			case 'D':num=num*16+13;break;
			case 'E':num=num*16+14;break;
			case 'F':num=num*16+15;break;
		}
		i++;
		
	}
	return num*flag;

}


int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		bool flag=false;
		char ans[20];
		long long int num=stn(a)+stn(b);
		if(num==0)
		{
			cout<<num<<endl;
			continue;
		}
		int i=0;
		if(num<0)
		{
			flag=1;
			num*=-1;
		}
		while(num)
		{
			switch(num%16)
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
			}
			i++;
			num/=16;			
		}
		if(flag)
		{
			ans[i]='-';
			i++;
		}
		while(--i>=0)cout<<ans[i];
		cout<<endl;
		
		
	}
}
