#include<iostream.h>
using  namespace std;
class para
{
  int a,b;
public:
  para(int x,int y)
  {
    a=x;
    b=y;
  }
  void display()
  {
    cout<<"values of a is"<<a;
    cout<<"vlaues of b is"<<b;
  };
};
int main()
{
  para t(10,20);
  t.display();
  return 0;
}
