#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s,t1,t2;
	while( cin>>s )
	{
		t1=s;
		t2=s;
		sort(t1.begin(),t1.end() );
		int i,j,temp;
		for( i=2; i<=s.size(); i++ )
		{
			temp=(s[s.size()-1]-'0')*i;
			s[s.size()-1]=temp%10+'0';
			temp/=10;
			for( j=s.size()-2; j>0; j-- )
			{
				temp+=(s[j]-'0')*i;
				s[j]=temp%10+'0';
				temp/=10;
			}
			if( (temp+=(s[j]-'0')*i)>=10 )
				break;
			else 
			{	
				s[j]=temp+'0';
				sort(s.begin(),s.end() );
				if( s!=t1 )
					break;
				s=t2;
			}				
		}
		if( i==s.size()+1 )
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}