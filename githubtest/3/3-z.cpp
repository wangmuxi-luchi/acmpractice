/*
还记得汉诺塔III吗？他的规则是这样的：不允许直接从最左(右)边移到最右(左)边(每次移动一定是移到中间杆或从中间移出)，
也不允许大盘放到小盘的上面。xhd在想如果我们允许最大的盘子放到最上面会怎么样呢？
（只允许最大的放在最上面）当然最后需要的结果是盘子从小到大排在最右边。
Input
输入数据的第一行是一个数据T，表示有T组数据。
每组数据有一个正整数n(1 <= n <= 20)，表示有n个盘子。
Output
对于每组输入数据，最少需要的摆放次数。
Sample Input
2
1
10
Sample Output
2
19684
*/

#include<iostream>
using namespace std;
long long int ans[21];
int main()
{
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<=20;i++)ans[i]=3*ans[i-1]+1;
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",ans[n-1]*2+2);
    }
}
