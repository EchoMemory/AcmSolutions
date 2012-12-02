#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

unsigned int gcd(unsigned int x, unsigned int y)
{
	if(x%y==0)
		return y;
	else 
		return gcd(y,x%y);
}
int main()
{
	string s;
	while( getline(cin,s) )
	{
		istringstream sin(s);
		vector<unsigned int> v;
		unsigned int n;
		while( sin>>n )
			v.push_back(n);
		sort(v.begin(),v.end());
		reverse(v.begin(),v.end());
		int count=0;
		for( int i=0; i<v.size(); i++ )
			for( int j=i+1; j<v.size(); j++ )
				if( gcd(v[i],v[j])==1 )
					count++;
			cout<<count<<endl;
	}
  return 0;
}
