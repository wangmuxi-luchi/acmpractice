/*
Consider the aggregate An= { 1, 2, …, n }. For example, A1={1}, A3={1,2,3}. A subset sequence is defined as a array of a non-empty subset. 
Sort all the subset sequece of An in lexicography order. Your task is to find the m-th one.
Input
The input contains several test cases. Each test case consists of two numbers n and 
m ( 0< n<= 20, 0< m<= the total number of the subset sequence of An ).
Output
For each test case, you should output the m-th subset sequence of An in one line.
Sample Input
1 1
2 1
2 2
2 3
2 4
3 10
Sample Output
1
1
1 2
2
2 1
2 3 1
*/
#include<iostream>
#include<cstring>
using namespace std;

int n;
bool arr[21];
long long int m,tem,count[20];

int main()
{
    count[0]=1;
    for(int i=1;i<20;i++)
    {
        count[i]=i*count[i-1]+1;
    }

    while(scanf("%d%lld",&n,&m)!=EOF)
    {
        if(m==1)
        {
            printf("%d\n",1);
            continue;
        }
        memset(arr,false,sizeof(arr));
        //解决第一位数
        int i=1;         //i指向第一个未使用的元素
        while(arr[i])i++;//
        if(n==1)//解决最后一位数
        {
            printf("%d",i);
            break;
        }


        if(m==0)m=count[n];
        tem=(m-1)/count[n-1];

        while(tem--)
        {
            i++;
            while(arr[i])i++;
        }
        printf("%d",i);
        arr[i]=true;
        m%=count[n-1];
        n--;
        //解决第一位数
        
        while(m!=1&&n)
        {
            int i=1;         //i指向第一个未使用的元素
            while(arr[i])i++;//
            if(n==1)//解决最后一位数
            {
                printf(" %d",i);
                break;
            }


            if(m==0)m=count[n];
            tem=(m-2)/count[n-1];

            while(tem--)
            {
                i++;
                while(arr[i])i++;
            }
            printf(" %d",i);
            arr[i]=true;
            m=(m-1)%count[n-1];
            n--;
        }
        printf("\n");
    }
    
}