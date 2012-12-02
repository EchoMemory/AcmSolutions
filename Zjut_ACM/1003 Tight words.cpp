#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double f[105][10];
	int n,k,i,j;
	double sum;
	while(cin>>k>>n)
	{
		memset(f,0,sizeof(f));
		for(j=0;j<=k;j++) 
			f[1][j]=1;
		for(i=2;i<=n;i++)
			for(j=0;j<=k;j++)
			{
				f[i][j]=f[i-1][j];
				if(j-1>=0) f[i][j]+=f[i-1][j-1];
				if(j+1<=k) f[i][j]+=f[i-1][j+1];
			}
			sum=0;
			for(j=0;j<=k;j++) sum+=f[n][j];
			cout<<fixed<<setprecision(5)<<sum/pow((double)k+1,(double)n)*100<<endl;
	}
	return 0;
}