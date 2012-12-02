#include<iostream>
#include<string>
using namespace std;
int dp[1005][1005];//c[i][j]存的是长为i的字符串变成长为j的字符串至少需要的次数

int min(int a,int b,int c)
{	
	int t=(a<b)?a:b;	
	return t<c?t:c;	
}
int main()
{	
	string s,t;	
	int i,j,lens,lent;	
	while( cin>>s>>t )
	{		
		memset(dp,0,sizeof(dp));		
		lens=s.size();		
		lent=t.size();		
		for( i=0; i<=lens; i++ )			
			dp[i][0]=i;   //长为i的字符串变成空字符串，当然至少需要i次		
		for( j=0; j<=lent; j++ )			
			dp[0][j]=j;		
		for( i=1; i<=lens; i++ )			
			for( j=1; j<=lent; j++ )
			{				
				if(s[i-1]==t[j-1])					
					dp[i][j]=dp[i-1][j-1];				
				else					
					dp[i][j]=min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1])+1;//1+c[i-1][j-1]表示替换，1+c[i-1][j],c[i][j-1]+1表示增加或删除。(增加和删除本质上是一样的)				
			}			
			cout<<dp[lens][lent]<<endl;			
	}	
	return 0;
	
}
