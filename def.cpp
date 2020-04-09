#include<iostream>
using namespace std;
class def
{
public:
int a,b;
def()
{
a=10;
b=20;
}
};
int main()
{
def c; 
cout<<"a:"<<c.a<<endl;
cout<<"b:"<<c.b<<endl;
return 1;
}
