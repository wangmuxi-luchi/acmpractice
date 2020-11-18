/*
甜甜从小就喜欢画图画，最近他买了一支智能画笔，由于刚刚接触，所以甜甜只会用它来画直线，于是他就在平面直角坐标系中画出如下的图形：




甜甜的好朋友蜜蜜发现上面的图还是有点规则的，于是他问甜甜：在你画的图中，我给你两个点，
请你算一算连接两点的折线长度（即沿折线走的路线长度）吧。
Input
第一个数是正整数N（≤100）。代表数据的组数。
每组数据由四个非负整数组成x1，y1，x2，y2；所有的数都不会大于100。
Output
对于每组数据，输出两点(x1,y1),(x2,y2)之间的折线距离。注意输出结果精确到小数点后3位。
Sample Input
5
0 0 0 1
0 0 1 0
2 3 3 1
99 99 9 9
5 5 5 5
Sample Output
1.000
2.414
10.646
54985.047
0.000
*/
#include<iostream>
#include<cmath>
using namespace std;
string str[1000];
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double x1,y1,x2,y2;
        scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
        double d1=x1+y1,d2=x2+y2;
        if(d1>d2)
        {
            double tem;
            tem=d1;d1=d2;d2=tem;
            tem=x1;x1=x2;x2=tem;
            tem=y1;y1=y2;y2=tem;
        }
        if(d1==d2)
        {
            printf("%.3lf\n",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
        }
        else
        {
            double dis,dis1,dis2;
            int i=d1;
            dis=sqrt(i*i+(i+1)*(i+1));
            i++;
            for(;i<d2;i++)dis+=((sqrt(2)*i)+sqrt(i*i+(i+1)*(i+1)));
            dis1=sqrt((x1-d1)*(x1-d1)+(y1)*(y1));
            dis2=sqrt((x2)*(x2)+(y2-d2)*(y2-d2));
            printf("%.3lf\n",dis+dis1+dis2);
            
        }
    }
}