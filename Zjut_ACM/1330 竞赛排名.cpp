#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
int main()
{
	int n,res,g=0;
	while( cin>>n && n )
	{
		if( g++ )
			cout<<endl;
		string win,lose;
		int k;
		map<string, int> mp1;
		for(k=1; k<=n*(n-1)/2 && cin>>win>>lose>>res; k++)
		{
			if(res==0)
				mp1[win]++, mp1[lose]++;
			else
				mp1[win]+=3, mp1[lose]+=0;
		}
		map<int, set<string> > mp2;
		for(map<string, int>::iterator it1=mp1.begin(); it1!=mp1.end(); it1++)
			mp2[it1->second].insert(it1->first);
		k=1;
		for( map<int, set<string> >::reverse_iterator it2=mp2.rbegin(); it2!=mp2.rend(); it2++)
		{
			cout<<k++<<":";
			for(set<string>::iterator it3=(it2->second).begin(); it3!=(it2->second).end();  it3++)
				cout<<" "<<(*it3);
			cout<<"\n";
		}
	}
	return 0;
}