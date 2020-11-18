/*
医学界发现的新病毒因其蔓延速度和Internet上传播的"红色病毒"不相上下,被称为"红色病毒",
经研究发现,该病毒及其变种的DNA的一条单链中,胞嘧啶,腺嘧啶均是成对出现的。
现在有一长度为N的字符串,满足一下条件:
(1) 字符串仅由A,B,C,D四个字母组成;
(2) A出现偶数次(也可以不出现);
(3) C出现偶数次(也可以不出现);
计算满足条件的字符串个数.
当N=2时,所有满足条件的字符串有如下6个:BB,BD,DB,DD,AA,CC.
由于这个数据肯能非常庞大,你只要给出最后两位数字即可.
Input
每组输入的第一行是一个整数T,表示测试实例的个数,下面是T行数据,每行一个整数N(1<=N<2^64),当T=0时结束.
Output
对于每个测试实例,输出字符串个数的最后两位,每组输出后跟一个空行.
Sample Input
4
1
4
20
11
3
14
24
6
0
Sample Output
Case 1: 2
Case 2: 72
Case 3: 32
Case 4: 0

Case 1: 56
Case 2: 72
Case 3: 56
*/
#include<iostream>
using namespace std;
long long int ans[20]={52,56,20,72,72,56,60,12,92,56,0,52,12,56,40,92,32,56,80,32};
int main()
{
    long long int t,n;
    //bool flag=false;
    while(scanf("%lld",&t)!=EOF&&t)
    {
        //if(flag)
        //flag=true;        
        for(int i=1;i<=t;i++)
        {
            scanf("%lld",&n);
            if(n>2)printf("Case %d: %d\n",i,ans[(n-1)%20]);
            else if(n==1)printf("Case %d: 2\n",i);
            else if(n==2)printf("Case %d: 6\n",i);
        }
        printf("\n");
    }


}