#include <iostream>
#include <map>
using namespace std;

int plist[6600]={2,3,5,7,11,13,17,19,23,29};//6600是2^16
											//之内素数个数的估计值.
bool isPrime(int n)
{	//素数判断函数 
	for(int i=0;plist[i]*plist[i]<=n;i++)
		if(n%plist[i]==0)
			return false;
	return true;
}
int main()
{
    int i,j=10;
    for ( i=31; i<(1<<16); i+=2)
		if(isPrime(i))
			plist[j++]=i;//构造2^16 之内的素数表.
		for (int n;cin>>n;)
		{
			cout<<n<<": ";
			map<int,int> mp;//key存因子,value 存个数. 
			map<int,int>::iterator it;
			for ( i=0; n!=1 && i<j ; )
				if(n%plist[i])
					i++;
				else
					mp[plist[i]]++,n/=plist[i];
			if(n>(1<<16)) 
				mp[n]++;// 大于2^16的素因子最多一个.
			int num=1;
			for (it=mp.begin();it!=mp.end(); it++)
				num*=(1+it->second);
			cout<<num<<endl;
		}
		return 0;
}