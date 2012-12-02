#include <iostream>
#include <map>
using namespace std;

int plist[6600]={2,3,5,7,11,13,17,19,23,29};//6600��2^16
											//֮�����������Ĺ���ֵ.
bool isPrime(int n)
{	//�����жϺ��� 
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
			plist[j++]=i;//����2^16 ֮�ڵ�������.
		for (int n;cin>>n;)
		{
			cout<<n<<": ";
			map<int,int> mp;//key������,value �����. 
			map<int,int>::iterator it;
			for ( i=0; n!=1 && i<j ; )
				if(n%plist[i])
					i++;
				else
					mp[plist[i]]++,n/=plist[i];
			if(n>(1<<16)) 
				mp[n]++;// ����2^16�����������һ��.
			int num=1;
			for (it=mp.begin();it!=mp.end(); it++)
				num*=(1+it->second);
			cout<<num<<endl;
		}
		return 0;
}