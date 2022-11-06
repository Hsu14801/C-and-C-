#include<iostream>
using namespace std;
class A
{
      private :int a;
      public  :
              void set(int p)
              {a=p;}
              void display()
              {
               cout<<a<<",";
              }         
};
class B
{
      private :int b;
      public  :void set(int q)
              {b=q;}
              void display()
              {cout<<b<<endl;}
};
class C:public A,public B
{
      
};
main()
{     
      C obj;
      obj.A::set(3);
      obj.B::set(4);
      obj.A::display();
      obj.B::display();
      system("pause");
}
