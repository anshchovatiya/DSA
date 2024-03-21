#include <iostream>
#include <array>

using namespace std;

int main()
{
     array<int, 10> obj1 = {34, 35, 29, 69, 99, 29, 34, 69, 28, 39};

     // return the front position element
     cout << endl
          << obj1.front() << endl;

     // return the back position element
     cout << endl
          << obj1.back() << endl;

     // return element on the index number
     cout << endl
          << obj1.at(6) << endl;

     // return current elements size of the array
     int length = obj1.size();

     cout
         << endl;
     for (int i = 0; i < length; i++)
     {
          cout << obj1[i] << " ";
     }
     cout << endl
          << endl;

     // set all value by 100
     obj1.fill(100);

     return 0;
}