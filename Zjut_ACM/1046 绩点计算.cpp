#include <iostream>
using namespace std;
struct ok{
	char s[ 20 ];
	double score[ 3 ];
	double jd;
};
void main()
{
	struct ok x[ 100 ];
	struct ok hold;
	int n=0;
	int i,temp;

	while( cin>>x[n].s>>x[n].score[0]
		>>x[n].score[1]>>x[n].score[2] )
			n++;
	for( i=0; i<n; i++ )
		{
			x[i].jd=0;
			if( x[i].score[0]>=60 )
				x[i].jd += (x[i].score[0]-50)/10.0*3;
			if( x[i].score[1]>=60 )
				x[i].jd += (x[i].score[1]-50)/10.0*3;
			if( x[i].score[2]>=60 )
				x[i].jd += (x[i].score[2]-50)/10.0*4;
			x[i].jd/=10.0;
		}
	for( temp=0; temp<n; temp++ )
		for( i=0; i<n-temp-1; i++ )
			if( x[i].jd < x[i+1].jd )
			{
				hold=x[i];
				x[i]=x[i+1];
				x[i+1]=hold;
			}
	for( i=0;i<n; i++ )
		cout<<x[i].s<<" "<<x[i].score[0]<<" "<<x[i].score[1]
		<<" "<<x[i].score[2]<<endl;
}

	
