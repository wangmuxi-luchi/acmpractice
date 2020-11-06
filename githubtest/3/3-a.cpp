/*
Give you the width and height of the rectangle,darw it.
Input
Input contains a number of test cases.For each case ,
there are two numbers n and m (0 < n,m < 75)indicate the width and height of the rectangle.
Iuput ends of EOF.
Output
For each case,you should draw a rectangle with the width and height giving in the input.
after each case, you should a blank line.
Sample Input
3 2
Sample Output
+---+
|   |
|   |
+---+
*/
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		cout<<'+';
		for(int i=0;i<n;i++)cout<<'-';
		cout<<'+'<<endl;
		for(int i=0;i<m;i++)
		{
			cout<<'|';
			for(int i=0;i<n;i++)cout<<' ';
			cout<<'|'<<endl;
		}
		cout<<'+';
		for(int i=0;i<n;i++)cout<<'-';
		cout<<'+'<<endl<<endl;	
	}
}
