#include<iostream>
using namespace std;

class rom
{
    double a;
    int  b;

    public :

    int t;

    void get_data()
    {
        cout << endl << "enter the value of a : ";
        cin >> a;
        cout << "enter the value of b : ";
        cin >> b;
    }

    void print_data()
    {
        cout << endl  << "the value of a is " << a << endl ;
        cout << "the value of b is " << b << endl << " ";
    }
};


int main()
{
    rom o1;

    o1.get_data();
    // o1.print_data();
    rom *o2 = &o1;

    // (*o2).print_data();
    o2->print_data();
    cout << "size of object is " << sizeof(int);
}