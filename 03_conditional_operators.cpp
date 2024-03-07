#include <iostream>

using namespace std;

int main()
{
    // int a = 3, b = 5;
    // int c = a && b;
    // cout << endl
    //      << " a : " << a << " b : " << b << " c : " << c << endl;

    // int a = 1, b = 3;
    // int c = --a && --b;
    // cout << endl
    //      << " a : " << a << " b : " << b << " c : " << c << endl;

    // int a = 1, b = 3;
    // int c = --a || ++b;
    // cout << endl
    //      << " a : " << a << " b : " << b << " c : " << c << endl;

    //  int  a = 0, b = 3;
    //  int  c = ++a || --b;
    //  cout << endl
    //          << " a : " << a << " b : " << b << " c : " << c << endl;

    // int a = 1, b = 3, c = 3;
    // int d = --a || --b || --c;
    // cout << endl
    //      << " a : " << a << " b : " << b << " c : " << c << " d : " << d << endl;

    int a = 1, b = 3, c = 8;
    int d = --a && --b || --c;
    cout << endl
         << " a : " << a << " b : " << b << " c : " << c << " d : " << d << endl;

    return 0;
}