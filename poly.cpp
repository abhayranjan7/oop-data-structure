#include<iostream>
using namespace std;

class shape
{
    protected:
    float r;
public:
    float Area(float a)
    {
        r=a;
    }
};

class square:public shape
{
public:
  float area()
      {
          return r * r;
      }
};
class circle:public shape
{
public:
  float area()
      { 
          return 3.14 * r * r;
      }
};
int main()
{
  shape *p;
  circle c;
  p=&c;
  square s;
  shape *b = &s;
  p->Area(3.0);
  b->Area(5.0);
  cout << c.area() << endl;
  cout << s.area() << endl;
}
