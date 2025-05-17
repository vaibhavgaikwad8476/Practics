#include<iostream>
using namespace std;

class Demo
{
    public:
        // Characteristics
        int no;
        float f;
        double d;
};

int main()
{
    Demo obj;

    obj.no = 11;
    obj.f = 90.99f;
    obj.d = 90.99999;

    cout<<sizeof(obj)<<"\n";
    
    cout<<obj.no<<"\n";
    cout<<obj.f<<"\n";
    cout<<obj.d<<"\n";
    
    return 0;
}