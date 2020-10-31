/*
根据输入的半径值，计算球的体积。
Input
输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。
Output
输出对应的球的体积，对于每组输入数据，输出一行，计算结果保留三位小数。
Sample Input
1
1.5
Sample Output
4.189
14.137


        
  
Hint
#define PI 3.1415927

*/ 
#define PI 3.1415927
#include<iostream> 
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	double r;
	while(cin>>r)
	{
		printf("%.3f\n",4*PI*pow(r,3)/3);
	}
}
