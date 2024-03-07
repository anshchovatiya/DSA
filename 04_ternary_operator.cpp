#include <iostream>

using namespace std;

int main()
{
    int upper_age, lower_age, age;

    cout << endl
         << "enter the upper age : ";
    cin >> upper_age;
    cout << endl
         << "enter the lower age : ";
    cin >> lower_age;
    cout << endl
         << "enter the your age  : ";
    cin >> age;

    double discount = (age >= upper_age) ? 15 : ((age >= lower_age) ? 5 : 0);

    cout << endl
         << "your discount rate is " << discount << "%" << endl
         << " ";
}