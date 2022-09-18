#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int a,b,c;
  float r1,r2,desc,d;

  cout<<"Enter the coefficient of a"<<endl;
  cin>>a;
  cout<<"Enter the coefficient of b"<<endl;
  cin>>b;
  cout<<"Enter the coefficient of c"<<endl;
  cin>>c;

  desc=(b*b) - (4*a*c);
  d = 2*a;

  if(desc>0)
  {
    cout<<"ROOTS ARE REAL AND UNEQUAL ";
  r1 =-(-b+sqrt(desc))/d;
  r2 =-(-b-sqrt(desc))/d;
  cout<<endl<<"ROOT1 = "<<r1;
  cout<<endl<<"ROOT2 = "<<r2;
  }
  else if (desc==0)
  {

      cout<<"ROOTS ARE REAL AND EQUAL ";
      r1=-b/d;
      r2=r1;
      cout<<endl<<"ROOT1 - "<<r1;
      cout<<endl<<"ROOT2 = "<<r2;
  }

  else
    cout<<endl<<"ROOTS ARE IMAGINARY ";

    return 0;
}
