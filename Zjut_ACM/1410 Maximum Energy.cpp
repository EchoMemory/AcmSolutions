#include<iostream>
using namespace std;
int main()
{
	int n,shu,x;
	while( cin>>n) 
	{
		int odd=1,sum=0;
		cin>>shu;
		for( int i=1; i<n; i++ )
		{
			cin>>x;
			if(odd)
			{
				if( x<shu )
				{
					sum+=shu;
					odd=0;				
				}
				else 
					shu=x;
				shu=x;
				continue;
			}
			else
			{
				if( x>shu )
				{
					sum-=shu;
					odd=1;				
				}
				else 
					shu=x;
				shu=x;			
			}
		}	
		if(odd)
			sum+=shu;
		cout<<sum<<endl;
	}
	return 0;
}