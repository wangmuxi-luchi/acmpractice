/*
lily的好朋友xiaoou333最近很空，他想了一件没有什么意义的事情，就是统计一篇文章里不同单词的总数。
下面你的任务是帮助xiaoou333解决这个问题。
Input
有多组数据，每组一行，每组就是一篇小文章。每篇小文章都是由小写字母和空格组成，没有标点符号，遇到#时表示输入结束。
Output
每组只输出一个整数，其单独成行，该整数代表一篇文章里不同单词的总数。
Sample Input
you are you my friend
ajfk ajfka afi iei 
aofajfkas
ad dk dkd dk kdkd cmmc cmmc dk ad
#
Sample Output
4
*/
#include<iostream>
#include<string>
using namespace std;
string str[100000];

bool isin(string* arr,string s,int i)
{
    bool ret=false;
    for(int j=0;j<i;j++)if(arr[j]==s)ret=true;
    return ret;
}
int main()
{
    char tem;
    string temstr;
    int i=0;
    while(scanf("%c",&tem)!=EOF&&tem!='#')
    {
        if(tem==' ')
        {
            if(temstr!=""&&!isin(str,temstr,i))
            {
                str[i]=temstr;
                i++;
            }
            temstr="";
        }
        else if(tem=='\n')
        {
            if(temstr!=""&&!isin(str,temstr,i))
            {
                str[i]=temstr;
                i++;
            }
            temstr="";
            printf("%d\n",i);
            i=0;
        }
        else
        {
            temstr+=tem;
        }
        
    }
}