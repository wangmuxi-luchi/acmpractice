/*
Give you a number on base ten,you should output it on 
base two.(0 < n < 1000)
Input
For each case there is a postive number n on base ten, 
end of file.
Output
For each case output a number on base two.
Sample Input
1
2
3
Sample Output
1
10
11
*/
#include<iostream>
using namespace std;


int main()
{
	int n;
	while(cin>>n)
	{
		//if(n<0)cout<<'-'; 
		char base2[33];
		int i;
		for(i=0;n;i++)
		{
			if(n%2==1)base2[i]='1';
			else base2[i]='0';
			n/=2;
		}
		while(i--)cout<<base2[i];
		cout<<base2[0]<<endl;
		
	}
}
