#include <iostream>
#include <vector>

using namespace std;

int main()
{
     vector<int> v;

     // push elements at back position of the array
     v.push_back(55);
     v.push_back(15);
     v.push_back(75);
     v.push_back(95);
     v.push_back(5);

     // return the front position element
     cout << endl
          << v.front() << endl;

     // return the back position element
     cout << endl
          << v.back() << endl;

     // return total capacity of the array
     cout << endl
          << v.capacity() << endl;

     // return current elements size of the array
     int length = v.size();

     // return element on the index number
     cout << endl
          << v.at(2) << endl;

     cout << endl;
     // return true if array is empty else return false
     while (!v.empty())
     {
          cout << v.back() << " ";
          v.pop_back();
     }
     cout << endl;

     v.push_back(34);

     // return current elements size of the array
     int length = v.size();

     // remove all element and empty the array
     v.clear();

     vector<int> v1(5, 11); // 5 is size of the array and 11 is initial value of all elements
     vector<int> v2(v1);    // copy v1 array
     cout << endl;

     // return true if array is empty else return false
     while (!v1.empty())
     {
          cout << v1.back() << " ";
          v1.pop_back();
     }
     cout << endl
          << endl;
     ;

     // return true if array is empty else return false
     while (!v2.empty())
     {
          cout << v2.back() << " ";
          v2.pop_back();
     }
     cout << endl
          << endl;

     return 0;
}
