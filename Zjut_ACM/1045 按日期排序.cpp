#include <iostream>
using namespace std;
struct ok{
	int month;
	int day;
	int year;
};
int main()
{
	struct ok x[100],hold;
	int n=0;
	int i;
	int temp;
	while( scanf( "%d/%d/%d",&x[n].month,&x[n].day,&x[n].year ) != EOF )
		n++;
	for( temp=0; temp<n; temp++ )
		for( i=0; i<n-temp-1; i++ )
		{
			if( x[i].year==x[i+1].year )
			{
				if( x[i].month==x[i+1].month )
					if( x[i].day>x[i+1].day )
					{
						hold=x[i];
						x[i]=x[i+1];
						x[i+1]=hold;
					}
				if( x[i].month>x[i+1].month )
					{
						hold=x[i];
						x[i]=x[i+1];
						x[i+1]=hold;
					}
			}
			if( x[i].year>x[i+1].year )
			{
					hold=x[i];
					x[i]=x[i+1];
					x[i+1]=hold;
			}
		}
	for( i=0; i<n; i++ )
	{
		if( x[i].month<10 )
			cout<<"0"<<x[i].month<<"/";
		else
			cout<<x[i].month<<"/";
		if( x[i].day<10 )
			cout<<"0"<<x[i].month<<"/";
		else
			cout<<x[i].day<<"/";
		for( int j=1000; j>0 && x[i].year/j==0; j/=10 )
			cout<<"0";
		cout<<x[i].year<<endl;
	}
	return 0;
}