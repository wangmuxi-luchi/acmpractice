/*
Given a sequence 1,2,3,......N, your job is to calculate all the possible sub-sequences that the sum of the sub-sequence is M.
Input
Input contains multiple test cases. each case contains two integers N, M( 1 <= N, M <= 1000000000).input ends with N = M = 0.
Output
For each test case, print all the possible sub-sequence that its sum is M.The format is show in the sample below.
print a blank line after each test case.
Sample Input
20 10
50 30
0 0
Sample Output
[1,4]
[10,10]

[4,8]
[6,9]
[9,11]
[30,30]
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    long long int n,m;
    //bool flag=false;
    while(cin>>n>>m&&(m||n))
    {
        //if(flag)cout<<endl;
        //flag=true;
        if(!(n&&m))continue;
        long long int st,i;
        i=sqrt(2*m);
        for(;i>=0;i--)
        {
            st=(m-(i*(i+1)/2))/(i+1);
            if(st>0&&st*(i+1)+i*(i+1)/2==m&&st+i<=n)printf("[%lld,%lld]\n",st,st+i);
        }
        cout<<endl;
    }
}
