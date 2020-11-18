/*
There are some students in a class, Can you help teacher find the highest student .
Input
There are some cases. The first line contains an integer t, indicate the cases; 
Each case have an integer n ( 1 ≤ n ≤ 100 ) , followed n students’ height.
Output
For each case output the highest height, the height to two decimal plases;
Sample Input
2
3 170.00 165.00 180.00
4 165.00 182.00 172.00 160.00
Sample Output
180.00
182.00
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        float hei=0,tem;
        while(n--)
        {
            scanf("%f",&tem);
            if(tem>hei)hei=tem;
        }
        printf("%.2f\n",hei);
    }
}