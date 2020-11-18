/*
Suppose there are 5 types of coins: 50-cent, 25-cent, 10-cent, 5-cent, and 1-cent. 
We want to make changes with these coins for a given amount of money.

For example, if we have 11 cents, then we can make changes with one 10-cent coin and one 1-cent coin, 
or two 5-cent coins and one 1-cent coin, or one 5-cent coin and six 1-cent coins, 
or eleven 1-cent coins. So there are four ways of making changes for 11 cents with the above coins.
 Note that we count that there is one way of making change for zero cent.

Write a program to find the total number of different ways of making changes for any amount of money in cents. 
Your program should be able to handle up to 100 coins.
Input
The input file contains any number of lines, each one consisting of a number ( ≤250 )
 for the amount of money in cents.
Output
For each input line, output a line containing the number of different ways of making changes 
with the above 5 types of coins.
Sample Input
11
26
Sample Output
4
13
*/
#include<iostream>
#include<cstring>
using namespace std;
long long int an,ans[101][251];
int coin[]={1,5,10,25,50};
int number;
int mone;
int main()
{
    memset(ans,0,sizeof(ans));
    ans[0][0]=1;
    for(int i=0;i<5;i++)
    {
        for(int num=1;num<101;num++)
        {
            for(mone=coin[i];mone<251;mone++)
            {
                ans[num][mone]+=ans[num-1][mone-coin[i]];
            }
        }
    }
    while(scanf("%d",&mone)!=EOF)
    {
        an=0;
        for(int num=0;num<=100;num++)an+=ans[num][mone];
        printf("%lld\n",an);
    }

}