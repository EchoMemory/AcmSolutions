#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a[10] = {2,4,5,1,9,8,7,0,6,3};
	string s,t;
	cin >> s;
	int i,j,m,n;
	m = 0;
	for( i=0; i<s.size(); i++ )
		m=m*10+a[s[i]-'0'];
	for( i=0; i<m; i++ )
	{
		n = 0;
		cin >> t;
		for( j=0; j<t.size(); j++ )
			n = n*10 + a[t[j]-'0'];
		cout << n << endl;
	}
	return 0;
}