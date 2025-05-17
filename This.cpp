#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        Demo(int A, int B)
        {
            i = A; j = B;
        }
        void Display(int x)
        {
            cout<<"Value of i "<<i<<"\n";
            cout<<"Value of j "<<j<<"\n";
        }
};
int main()
{
    Demo obj(11,21);

    obj.Display(51);

    return 0;
}