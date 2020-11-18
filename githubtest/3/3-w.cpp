/*
需要的时候，就把一个个大小差一圈的筐叠上去，使得从上往下看时，边筐花色交错。这个工作现在要让计算机来完成，得看你的了。
Input
输入是一个个的三元组，分别是，外筐尺寸n（n为满足0<n<80的奇整数），
中心花色字符，外筐花色字符，后二者都为ASCII可见字符；
Output
输出叠在一起的筐图案，中心花色与外筐花色字符从内层起交错相叠，
多筐相叠时，最外筐的角总是被打磨掉。叠筐与叠筐之间应有一行间隔。
Sample Input
11 B A
5 @ W
Sample Output
 AAAAAAAAA 
ABBBBBBBBBA
ABAAAAAAABA
ABABBBBBABA
ABABAAABABA
ABABABABABA
ABABAAABABA
ABABBBBBABA
ABAAAAAAABA
ABBBBBBBBBA
 AAAAAAAAA 

 @@@ 
@WWW@
@W@W@
@WWW@
 @@@ 

*/
#include<iostream>
using namespace std;
char arr[80];
void put(char* arr,int left,int right,char c)
{
    for(int i=left;i<=right;i++)arr[i]=c;

}
void pri(char* arr,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",arr[i]); 
    }
    printf("\n");
}
int main()
{
    int n,left,right,flag;
    char c[2];
    bool fl=false;
    while(scanf("%d %c %c",&n,&c[1],&c[0])!=EOF)
    {
        if(fl)printf("\n");
        if(n==1)
        {
            printf("%c\n",c[1]);
            continue;
        }
        fl=true;
        flag=((n+1)/2)%2;
        for(int i=1;i<=n;i++)
        {
            if(i<n-i+1)put(arr,i,n-i+1,c[flag]);
            else put(arr,n-i+1,i,c[flag]);
            flag=!flag;
            if(i==1||i==n)arr[1]=arr[n]=' ';
            else arr[1]=arr[n]=c[((n+1)/2)%2];
            pri(arr,n);

        }
    }

}