/*
正整数A是否能被正整数B整除，不知道为什么xhd会研究这个问题，来帮帮他吧。
Input
输入数据的第一行是一个数据T，表示有T组数据。
每组数据有两个正整数A和B(A,B<10^9)。
Output
对于每组输入数据，输出"YES"表示可以被整除，"NO"表示不能被整除。
Sample Input
2
4 2
5 3
Sample Output
YES
NO
*/
#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(a%b)printf("NO\n");
        else printf("YES\n");
    }
}