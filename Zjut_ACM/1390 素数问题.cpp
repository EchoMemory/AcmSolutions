#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	while( cin>>n && n )
	{
		vector<int> vec;
		int i,j,k;
		k=n;
		while( k>1 )
		{
			for( i=2; i<=k && k!=1 ; i++ )
				if( k%i==0 )
				{
					vec.push_back(i);
					k/=i;
					break;
				}
		}
		for( j=0; j<vec.size(); j++ )
		{
			if( j==vec.size()-1 )
				cout<<vec[j];
			else
				cout<<vec[j]<<"*";
		}
		cout<<endl;
		vec.clear();
	}
	return 0;
}
