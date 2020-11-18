/*
Your objective for this question is to develop a program which will generate a fibbonacci number. 
The fibbonacci function is defined as such:

f(0) = 0
f(1) = 1
f(n) = f(n-1) + f(n-2)

Your program should be able to handle values of n in the range 0 to 50.
Input
Each test case consists of one integer n in a single line where 0≤n≤50. The input is terminated by -1.
Output
Print out the answer in a single line for each test case.
Sample Input
3
4
5
-1
Sample Output
2
3
5


        
  
you can use 64bit integer: __int64
*/
#include<iostream>
using namespace std;
long long int fab[51];
int main()
{
    fab[0]=0;
    fab[1]=1;
    for(int i=2;i<51;i++)fab[i]=fab[i-1]+fab[i-2];
    int input;
    while(scanf("%d",&input)!=EOF&&input!=-1)printf("%lld\n",fab[input]);
}