#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main()
{
	int count=0;
	__int64 a=479001600,n;
	vector<__int64> v;
	while( scanf( "%I64d",&n)!=EOF )
	{
		if( n<=a )
			v.push_back(n);
	}
	sort(v.begin(),v.end());
	int l=0,r=v.size()-1;
	while(l<r)
	{
		if(v[l]*v[r]==a)
		{
			count++;
			l++;
			r--;
		}
		else
			if(v[l]*v[r]<a)
				l++;
			else
				r--;
	}
	cout<<count<<endl;
	return 0;
}