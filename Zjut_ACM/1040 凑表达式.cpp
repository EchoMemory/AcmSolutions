#include<iostream>
using namespace std;
bool f(double a,double b,double c)
{
  
     if((a+b)+c==0) 
		 return true;
     if((a+b)-c==0) 
		 return true;
     if((a+b)*c==0) 
		 return true;
     if((a+b)/c==0) 
		 return true;
     if((a-b)+c==0) 
		 return true;
     if((a-b)-c==0) 
		 return true;
     if((a-b)*c==0) 
		 return true;
     if((a-b)/c==0) 
		 return true;
     if((a*b)+c==0)
		 return true;
     if((a*b)-c==0) 
		 return true;
     if((a/b)+c==0) 
		 return true;
     if((a/b)-c==0) 
		 return true;
     return false;
}

int main()
{
  double a,b,c;
  while( cin>>a>>b>>c && (a||b||c) )
  {
     if(a==0||b==0||c==0)
	 {
		 cout<<"yes"<<endl;
		 continue;
	 }
     if( f(a,b,c) )
	 {
		 cout<<"yes"<<endl;
		 continue;
	 }
     if( f(a,c,b) )
	 {
		 cout<<"yes"<<endl;
		 continue;
	 }
     if( f(b,a,c) )
	 {
		 cout<<"yes"<<endl;
		 continue;
	 }
     if( f(b,c,a) )
	 {
		 cout<<"yes"<<endl;
		 continue;
	 }
     if( f(c,a,b) )
	 {
		 cout<<"yes"<<endl;
		 continue;
	 }
     if( f(c,b,a) )
	 {
		 cout<<"yes"<<endl;
		 continue;
	 }
     cout<<"no"<<endl;
  }
  return 0;
}  

