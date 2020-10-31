//question
/*
假设一个班有n(n<=50)个学生，每人考m(m<=5)门课，求每个学生的平均成绩和每门课的平均成绩，并输出各科成绩均大于等于平均成绩的学生数量。
Input
输入数据有多个测试实例，每个测试实例的第一行包括两个整数n和m，分别表示学生数和课程数。然后是n行数据，每行包括m个整数（即：考试分数）。
Output
对于每个测试实例，输出3行数据，第一行包含n个数据，表示n个学生的平均成绩，结果保留两位小数；第二行包含m个数据，表示m门课的平均成绩，
结果保留两位小数；第三行是一个整数，表示该班级中各科成绩均大于等于平均成绩的学生数量。
每个测试实例后面跟一个空行。
Sample Input
2 2 
5 10
10 20
Sample Output
7.50 15.00
7.50 15.00
1
*/
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		double arr[50][5],stu[50]={0},sub[5]={0};
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
			}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				stu[i]+=arr[i][j];
				sub[j]+=arr[i][j];
			}
		}
		
		
		
		printf("%.2f",stu[0]/m);
		for(int i=1;i<n;i++)printf(" %.2f",stu[i]/m);
		
		sub[0]=sub[0]/n;
		printf("\n%.2f",sub[0]);
		for(int j=1;j<m;j++)
		{
			sub[j]=sub[j]/n;
			printf(" %.2f",sub[j]);
		}
		
		int count=0;
		for(int i=0;i<n;i++)
		{
			bool flag=true;
			for(int j=0;j<m&&flag;j++)if(arr[i][j]<sub[j])flag=false;
			count+=flag;
		}
		printf("\n%d\n\n",count);	
	}
}














