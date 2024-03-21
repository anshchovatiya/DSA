#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> v;

    // insert element at the back position of the array
    v.push(38);
    v.push(342);

    // return the back position element
    cout << endl
         << v.back() << endl;

    // delete element at the back of the array
    v.pop();

    // delete element at the front of the array
    v.pop();

    v.push(38);

    // return the front position element
    cout << endl
         << v.front() << endl;

    // return current elements size of the array
    int length = v.size();

    cout << endl
         << length << endl;

    v.push(89);
    v.push(39);
    v.push(47);
    v.push(317);
    v.push(389);
    v.push(32);

    cout
        << endl;
    // return true if array is empty else return false
    while (!v.empty())
    {
        cout << v.front() << " ";
        v.pop();
    }
    cout << endl
         << endl;

    return 0;
}