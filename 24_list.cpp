#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> v;

    // assign 2 int to initial value of 133
    v.assign(2, 133);

    // insert element at the back position of the array
    v.push_back(38);
    // insert element at the front position of the array
    v.push_front(342);

    // return the back position element
    cout << endl
         << v.back() << endl;

    // delete element at the back of the array
    v.pop_back();

    // delete element at the front of the array
    v.pop_front();

    v.push_back(37);
    v.push_front(3324);
    v.push_front(3345);
    v.push_front(854);
    v.push_front(82);

    // return current elements size of the array
    int length = v.size();

    // now t is pointing to second element of the array
    list<int>::iterator t = v.begin();
    list<int>::iterator end = v.end();

    cout << endl;

    while (t != end)
    {
        cout << *(t) << "  ";
        t++;
    }
    cout << endl
         << endl;

    // It will empty the array
    v.clear();

    // It will delete the element at iterator number
    v.erase(t);

    return 0;
}