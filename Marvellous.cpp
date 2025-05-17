#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;
        int y;

        Demo()
        {
            cout<<"Inside constructor\n";
        }
        ~Demo()
        {
            cout<<"Inside destructor\n";
        }
};

int main()
{
    cout<<"Inside main\n";

    Demo obj;

    obj.x = 11;
    obj.y = 21;
    
    cout<<obj.x<<"\n";
    cout<<obj.y<<"\n";
    
    cout<<"Use of object\n";

    return 0;
}