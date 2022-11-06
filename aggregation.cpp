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
               cout<<a<<endl;
              }         
};
class B
{
      private :A objA;
      public  :void set(int q)
              {objA.set(q);}
              void display()
              {objA.display();}
};

main()
{     
      B objB;
      objB.set(5);
      objB.display();
      system("pause");
}
