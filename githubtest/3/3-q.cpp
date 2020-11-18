/*
今年暑假杭电ACM集训队第一次组成女生队,其中有一队叫RPG,但做为集训队成员之一的野骆驼竟然不知道RPG三个人具体是谁谁。
RPG给他机会让他猜猜，第一次猜：R是公主，P是草儿，G是月野兔；第二次猜：R是草儿，P是月野兔，G是公主；第三次猜：
R是草儿，P是公主，G是月野兔；......可怜的野骆驼第六次终于把RPG分清楚了。由于RPG的带动，做ACM的女生越来越多，
我们的野骆驼想都知道她们，可现在有N多人，他要猜的次数可就多了，为了不为难野骆驼，女生们只要求他答对一半或以上就算过关，
请问有多少组答案能使他顺利过关。
Input
输入的数据里有多个case,每个case包括一个n，代表有几个女生，（n<=25）, n = 0输入结束。
Output
1
1
Sample Input
1
2
0
Sample Output
1
1
*/
#include<iostream>
#include<cstring>
using namespace std;
long long int arr[15],ans[26];
long long int zuhe(int n,int j)
{
    long long int ans=1;
    int tem=j;
    for(int i=1;i<=j;i++)
    {
        ans*=(n-i+1);
        ans/=i;
    }
    return ans;
}
int main()
{
    /*while(true)
    {
        int n;
        cin>>n;
        cout<<jc(n);
    }*/
    arr[0]=1,arr[1]=0;arr[2]=1;
    for(int i=3;i<15;i++)
    {
        arr[i]=(i-1)*(arr[i-1]+arr[i-2]);
    }
    memset(ans,0,sizeof(ans));
    for(int i=1;i<=25;i++)
    {
        int half=i/2;
        for(int j=0;j<=half;j++)
        {
            ans[i]+=zuhe(i,j)*arr[j];
        }
    }
    int input;
    while(scanf("%d",&input)!=EOF&&input!=0)printf("%lld\n",ans[input]);
}