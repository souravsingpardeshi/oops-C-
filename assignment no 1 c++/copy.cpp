#include<iostream.h>
using namespace std;
class copy
{
  int page;
  float price;
  copy(int c,float p)
  {
    page=c;
    price=p;
  };
  copy(const copy &c)
  {
    page=c.page;
    price=c.price;
    cout<<"\nim in copy constructor\n";
  };
  void display()
  {
    cout<<"pages:"<<page;
    cout<<"price:"<<price;
  };
};
int main()
{
  copy c;
  copy c1 (c);
  c.display();
  c1.dispaly();
  return 0;
}
