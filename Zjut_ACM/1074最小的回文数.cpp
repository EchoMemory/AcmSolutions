#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	char s[300];
	int len,i,j;
	while( cin>>s )
	{
		len=strlen(s);
		for( i=0; i<len; i++ )
			if( s[i]!='9' )
				break;
		if( i==len )
		{
			len++;
			for( i=1; i<len; i++ )
				s[i]='0';
			s[0]='1',s[len]='\0';
		}
		if( len==1 && atoi(s)<9 )
			cout<<atoi(s)+1<<endl;
		else if( len==1 && atoi(s)==9 )
			cout<<11<<endl;
		else
		{
			if( len%2==0)
			{
				for( i=len/2-1; i>=0; i-- )
				{
					if( s[i]>s[len-1-i] )
					{
						for( j=i; j>=0; j-- )
							s[len-1-j]=s[j];
						break;
					}
					if(	s[i]<s[len-1-i] )
					{ 
						s[len/2]++;
						s[len/2-1]++;
						for(j=i; j>=0; j-- )
							s[len-j-1]=s[j];
						break;
					}
				}
				if( i==-1 )
				{
					for( i=len/2-1; i>=0; i-- )
						if( s[i]!='9' )
						{
							s[i]++,s[len-i-1]++;
							break;
						}
						else
							s[i]='0',s[len-i-1]='0';
				}
			}
			else
			{
				for( i=len/2-1; i>=0; i-- )
				{
					if( s[i]<s[len-1-i] )
					{
						if( s[len/2]=='9' )
						{
							s[len/2]='0';
							for( j=len/2-1; j>=0; j-- )
								if( s[j]!='9' )
								{
									s[i]++;
									break;
								}
								else
									s[j]='0';
							for( j=len/2-1; j>=0; j-- )
								s[len-j-1]=s[j];
							break;
						}
						s[len/2]+=1;
						for(j=i; j>=0; j-- )
							s[len-j-1]=s[j];
						break;
					}
					if( s[i]>s[len-1-i] )
					{
						for( j=i; j>=0; j-- )
							s[len-j-1]=s[j];
						break;
					}
				}
				if( i==-1 )
				{
					if( s[len/2]=='9' )
					{
						s[len/2]='0';
						for( i=len/2-1; i>=0; i-- )
							if( s[i]!='9' )
							{
								s[len-i-1]++,s[i]++;
								break;
							}
							else
								s[len-i-1]=s[i]='0';
					}
					else
						s[len/2]++;
				}
			}		
			cout<<s<<endl;
		}
	}
	return 0;
}
