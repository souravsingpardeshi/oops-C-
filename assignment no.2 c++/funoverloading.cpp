#include<iostream.h>
using namespace std;
int add(int,int);
int add(int ,int,int);
int main()
{
  int a,b,c,d,e;
  cout<<"\nenter two numbers";
  cin>>a;
  cin>>b;
  cout<<"\naddition of two no. is "<<add(a,b);
  cout<<"\nenter three numbers";
  cin<<c;
  cin<<d;
  cin<<e;
  cout<<"\naddition of two numbers is "<<add(c,d,e);
  return 0;
}
int add(int a,int b)
{
  return (a+b);
};
int add(int c,int d,int e)
{
  return (c+d+e);
}
