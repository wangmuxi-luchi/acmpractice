/*
虽然草儿是个路痴（就是在杭电待了一年多，居然还会在校园里迷路的人，汗~),但是草儿仍然很喜欢旅行，
因为在旅途中 会遇见很多人（白马王子，^0^），很多事，还能丰富自己的阅历，还可以看美丽的风景……草儿想去很多地方，
她想要去东京铁塔看夜景，去威尼斯看电影，去阳明山上看海芋，去纽约纯粹看雪景，去巴黎喝咖啡写信，
去北京探望孟姜女……眼看寒假就快到了，这么一大段时间，可不能浪费啊，一定要给自己好好的放个假，
可是也不能荒废了训练啊，所以草儿决定在要在最短的时间去一个自己想去的地方！因为草儿的家在一个小镇上，
没有火车经过，所以她只能去邻近的城市坐火车（好可怜啊~）。
Input
输入数据有多组，每组的第一行是三个整数T，S和D，表示有T条路，和草儿家相邻的城市的有S个，草儿想去的地方有D个；
接着有T行，每行有三个整数a，b，time,表示a,b城市之间的车程是time小时；(1=<(a,b)<=1000;a,b 之间可能有多条路)
接着的第T+1行有S个数，表示和草儿家相连的城市；
接着的第T+2行有D个数，表示草儿想去地方。
Output
输出草儿能去某个喜欢的城市的最短时间。
Sample Input
6 2 3
1 3 5
1 4 7
2 8 12
3 8 4
4 9 12
9 10 2
1 2
8 9 10
Sample Output
9
*/
#include<iostream>
#include<cstring>
using namespace std;
int road[1001][1001];
int t,s,d,a,b,time,temroad,temroad1,temroad2,temtime,i,j;
bool flag;

int main()
{
    
    while(scanf("%d%d%d",&t,&s,&d)!=EOF)
    {
        flag=false;
        memset(road,0,sizeof(road));
        while(t--)
        {
            scanf("%d%d%d",&a,&b,&time);
            if(road[a][b]==0)road[a][b]=road[b][a]=time;
            else if(road[a][b]>time)road[a][b]=road[b][a]=time;
        }
        while(s--)
        {
            scanf("%d",&temroad);
            road[0][temroad]=road[temroad][0]=1;
        }
        while(d--)
        {
            scanf("%d",&temroad);
            if(road[0][temroad])
            {
                printf("%d\n");
                flag=true;
            }
            road[0][temroad]=road[temroad][0]=-1;            
        }
        
        if(flag)continue;
        while(flag==false)
        {          
            temtime=-1;
            for(i=1;i<=1000;i++)
            {
                if(road[0][i]&&road[0][i]!=-1)
                {  
                    for(j=1;j<=1000;j++)
                    {
                        if(road[i][j])
                        {
                            if(temtime==-1)
                            {
                                temroad1=i;
                                temroad2=j;
                                temtime=road[0][i]+road[i][j];
                            }
                            else if(temtime>road[0][i]+road[i][j])
                            {
                                temroad1=i;
                                temroad2=j;
                                temtime=road[0][i]+road[i][j];
                            }                              
                        }
                    }


                }
            }
            road[temroad1][temroad2]=road[temroad2][temroad1]=0;
            if(road[0][temroad2]==-1)flag=true;
            else road[0][temroad2]=temtime;

        }
        printf("%d\n",temtime-1);


    }
}