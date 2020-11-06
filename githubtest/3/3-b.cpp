/*
There are many lamps in a line. All of them are off at first. 
A series of operations are carried out on these lamps. On the i-th operation, 
the lamps whose numbers are the multiple of i change the condition ( on to off and off to on ).
Input
Each test case contains only a number n ( 0< n<= 10^5) in a line.
Output
Output the condition of the n-th lamp after infinity operations ( 0 - off, 1 - on ).
Sample Input
1
5
Sample Output
1
0


        
  

Consider the second test case:

The initial condition	   : 0 0 0 0 0 бн
After the first operation  : 1 1 1 1 1 бн
After the second operation : 1 0 1 0 1 бн
After the third operation  : 1 0 0 0 1 бн
After the fourth operation : 1 0 0 1 1 бн
After the fifth operation  : 1 0 0 1 0 бн

The later operations cannot change the condition of the fifth lamp any more. So the answer is 0.
Hint
hint
        
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int num=0;
		for(int i=1;i<=n;i++)if(n%i==0)num++;
		if(num%2)cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
