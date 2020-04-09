#include<iostream>
using namespace std;
class cpy
{
private:
int x,y;
float z,c;
public:
cpy(int x1,int y1)
{
x=x1;
y=y1;
}
cpy(float z,float c)
{
x=z;
y=c;
}
void display()
{
cout<<x<<" "<<y<<endl;
}
};
int main()
{
cpy obj1(10,25);
cpy obj2=obj1;
cout<<"Normal constructor:";
obj1.display();
cout<<"copy constructor:";
obj2.display();
return 0;
}
