#include <iostream>
using namespace std;
struct no{
	int score[5];
	char name[20];
	double average;
};
int main()
{
	struct no ok[100],hold;
	int flag=0;
	int i,j,temp;
	int n=0;
	double sum;
	while( scanf( "%s",ok[n].name )!=EOF )
	{
		sum=0;
		for( i=0; i<5; i++ )
		{
			cin>>ok[n].score[i];
			sum+=ok[n].score[i];
		}
		ok[n].average=sum/5;
		if( ok[n].average > 60 )
			flag++;
		n++;
	}
	for( temp=0; temp<n; temp++ )
		for( j=0; j<n-temp-1; j++ )
			if( ok[j].average < ok[j+1].average )
			{
				hold=ok[j];
				ok[j]=ok[j+1];
				ok[j+1]=hold;
			}
	for( i=0; i<flag; i++ )
		cout<<i+1<<" "<<ok[i].name<<endl;
	return 0;
}