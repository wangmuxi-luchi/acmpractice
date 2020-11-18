/*
时间过的好快，一个学期就这么的过去了，xhd在傻傻的看着表，出于对数据的渴望，
突然他想知道这个表的时针和分针的夹角是多少。现在xhd知道的只有时间，请你帮他算出这个夹角。

注：夹角的范围[0，180]，时针和分针的转动是连续而不是离散的。
Input
输入数据的第一行是一个数据T，表示有T组数据。
每组数据有三个整数h(0 <= h < 24)，m(0 <= m < 60)，s(0 <= s < 60)分别表示时、分、秒。
Output
对于每组输入数据，输出夹角的大小的整数部分。
Sample Input
2
8 3 17
5 13 30
Sample Output
138
75
*/
#include<iostream>
using namespace std;

int main()
{
    int t,h,m,s;
    double angh,angm,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&h,&m,&s);
        h%=12;
        angh=double(h*3600+m*60+s)/120;
        angm=double(m*60+s)/10;
        ans=angh-angm;
        if(ans<0)ans*=-1;
        if(ans>180)ans=360-ans;
        printf("%d\n",(int)ans);
    }
}