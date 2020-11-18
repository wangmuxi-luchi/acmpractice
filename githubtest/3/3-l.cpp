/*
RPG girls今天和大家一起去游乐场玩，终于可以坐上梦寐以求的过山车了。
可是，过山车的每一排只有两个座位，而且还有条不成文的规矩，就是每个女生必须找个个男生做partner和她同坐。
但是，每个女孩都有各自的想法，举个例子把，
Rabbit只愿意和XHD或PQK做partner，Grass只愿意和linle或LL做partner，PrincessSnow愿意和水域浪子或伪酷儿做partner。
考虑到经费问题，boss刘决定只让找到partner的人去坐过山车，其他的人，嘿嘿，就站在下面看着吧。
聪明的Acmer，你可以帮忙算算最多有多少对组合可以坐上过山车吗？
Input
输入数据的第一行是三个整数K , M , N，分别表示可能的组合数目，女生的人数，男生的人数。0<K<=1000
1<=N 和M<=500.接下来的K行，每行有两个数，分别表示女生Ai愿意和男生Bj做partner。最后一个0结束输入。
Output
对于每组数据，输出一个整数，表示可以坐上过山车的最多组合数。
Sample Input
6 3 3
1 1
1 2
1 3
2 1
2 3
3 1
0
Sample Output
3
*/
#include<iostream>
#include<cstring>
using namespace std;
bool arr[501][501],mark[501];
int boy[501];
int k,m,n;

bool find(int g)
{
    
    for(int b=1;b<=n;b++)
    {
        if(arr[g][b]&&mark[b]==false)
        {
            mark[b]=true;
            if(!boy[b]||find(boy[b]))
            {
                boy[b]=g;
                return true;
            }
        }

    }
    return false;
}

int main()
{
    while(scanf("%d%d%d",&k,&m,&n)!=EOF&&k!=0)
    {
        memset(arr,false,sizeof(arr));
        memset(boy,0,sizeof(boy));
        while(k--)
        {
            int g,b;
            scanf("%d%d",&g,&b);
            arr[g][b]=true;
        }
        int ans=0;
        for(int i=1;i<=m;i++)
        {
            memset(mark,false,sizeof(mark));
            if(find(i))ans++;
        }
        printf("%d\n",ans);



    }
}