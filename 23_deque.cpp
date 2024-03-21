#include <iostream>
#include <deque>

using namespace std;

int main()
{
     deque<int> v;

     // insert element at the back position of the array
     v.push_back(38);
     v.push_back(342);

     // return the back position element
     cout << endl
          << v.back() << endl;

     // insert element at the front position of the array
     v.push_front(1);
     v.push_front(14);
     v.push_front(19);

     // return element on the index number
     cout << endl
          << v.at(2) << endl;

     // delete element at the back of the array
     v.pop_back();

     // delete element at the front of the array
     v.pop_front();

     // return the front position element
     cout << endl
          << v.front() << endl;

     // return current elements size of the array
     int length = v.size();

     cout << endl
          << length << endl;

     cout << endl;
     // return true if array is empty else return false
     while (!v.empty())
     {
          cout << v.back() << " ";
          v.pop_back();
     }
     cout << endl;

     deque<int> t;

     t.push_back(38);
     t.push_back(28);
     t.push_back(27);
     t.push_back(14);

     // now ptr is pointing to the first element on the t array
     deque<int>::iterator ptr = t.begin();

     cout << endl
          << *(ptr) << endl;

     ptr++;

     cout << endl
          << *(ptr) << endl
          << endl;

     return 0;
}