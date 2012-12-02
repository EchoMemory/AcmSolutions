#include<iostream>
#include<string>
using namespace std;
int dp[1005][1005];//c[i][j]����ǳ�Ϊi���ַ�����ɳ�Ϊj���ַ���������Ҫ�Ĵ���

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
			dp[i][0]=i;   //��Ϊi���ַ�����ɿ��ַ�������Ȼ������Ҫi��		
		for( j=0; j<=lent; j++ )			
			dp[0][j]=j;		
		for( i=1; i<=lens; i++ )			
			for( j=1; j<=lent; j++ )
			{				
				if(s[i-1]==t[j-1])					
					dp[i][j]=dp[i-1][j-1];				
				else					
					dp[i][j]=min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1])+1;//1+c[i-1][j-1]��ʾ�滻��1+c[i-1][j],c[i][j-1]+1��ʾ���ӻ�ɾ����(���Ӻ�ɾ����������һ����)				
			}			
			cout<<dp[lens][lent]<<endl;			
	}	
	return 0;
	
}
