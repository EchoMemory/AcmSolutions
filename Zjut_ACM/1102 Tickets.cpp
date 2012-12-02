#include <iostream>
#define mini(a,b) a<b?a:b
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,i,dp[2001]={0},a[2001]={0},b[2001]={0};
		cin >> n;
		for (i=1; i<=n; i++)
			scanf ("%d",&a[i]);
		for (i=1; i<n; i++)
			scanf ("%d",&b[i]);
		dp[1]=a[1];
		for (i=2; i<=n; i++)
			dp[i] = mini((dp[i-1]+a[i]),(dp[i-2]+b[i-1]));
	//	cout << dp[n] << endl;
		int h = dp[n]/3600 + 8;
		int m = dp[n]%3600 / 60;
		int s = dp[n]%60;
		char c[3];
		if (h > 11 && h < 24)
		{
			if( h!=12 )
				h-=12;
			c[0]='p',c[1]='m';
		}
		else
			c[0]='a',c[1]='m';
		c[2]='\0';
		if (h < 10)
			cout << 0;
		cout << h << ':';
		if (m < 10)
			cout << 0;
		cout << m << ':';
		if (s < 10)
			cout << 0;
		cout << s << ' ' << c << endl;
	}
	return 0;
}