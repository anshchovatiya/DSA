#include <iostream>

using namespace std;

class arr
{
private:
    int *Arr;
    int Size;
    int top = -1;

public:
    arr(int size)
    {
        this->Size = size;
        Arr = new int[size];
    }

    // this function will insert number in first position of the array
    void First_Insert(int number)
    {
        if (top >= Size - 1)
        {
            cout << endl
                 << "The array is Full" << endl
                 << " ";
        }
        else
        {
            // 34 48 28 8
            for (int t = top, v = top + 1; t >= 0; t--, v--)
            {
                Arr[v] = Arr[t];
            }
            Arr[0] = number;
            top++;
            cout << endl
                 << "The element has been created" << endl
                 << " ";
        }
    }

    // this function will delete first element of the array
    void First_delete()
    {
        if (top < 0)
        {
            cout << endl
                 << "The array is empty" << endl
                 << " ";
        }
        else
        {

            for (int i = 0; i < top; i++)
            {
                Arr[i] = Arr[i + 1];
            }
            cout << endl
                 << "The element has been Deleted" << endl
                 << " ";

            --top;
        }
    }

    // this element will insert number at last position of the array
    void InsertEnd(int number)
    {
        if (top >= Size - 1)
        {
            cout << endl
                 << "The array is Full" << endl
                 << " ";
        }
        else
        {
            cout << endl
                 << "The element has been created" << endl
                 << " ";
            Arr[++top] = number;
        }
    }

    // this function will print the all elements in the array
    void display()
    {
        if (top < 0)
        {
            cout << endl
                 << "The array is empty" << endl
                 << " ";
        }
        else
        {
            cout << endl;
            for (int i = 0; i <= top; i++)
            {
                cout << Arr[i] << " ";
            }
            cout << endl
                 << " ";
        }
    }

    // this fuction will delete last element of the array
    void deleteEnd()
    {
        if (top < 0)
        {
            cout << endl
                 << "The array is empty" << endl
                 << " ";
        }
        else
        {
            cout << endl
                 << "The element has been Deleted" << endl
                 << " ";
            --top;
        }
    }

    void display_Size()
    {
        cout << endl
             << "The size of current array is " << top + 1 << endl
             << " ";
    }

    void change_element(int number, int index)
    {
        Arr[index] = number;
        cout << endl
             << "The elements number has been updated" << endl
             << " ";
    }
};

int main()
{
    int n;
    cout << endl
         << "Enter the size of the array : ";
    cin >> n;

    arr an(n);

    string Input;

    do
    {
        cout << endl
             << "Input first element press f";
        cout << endl
             << "Delete first element press fd";
        cout << endl
             << "Input last element press l";
        cout << endl
             << "Delete last element press ld";
        cout << endl
             << "Display elements press p";
        cout << endl
             << "Display size of the array press s";
        cout << endl
             << "Change the Element press c";
        cout << endl
             << "Exit press e" << endl
             << " ";

        cout << endl
             << "Enter your Choice : ";
        cin >> Input;

        if (Input == "l")
        {
            int number;
            cout << endl
                 << "Enter the number : ";
            cin >> number;
            an.InsertEnd(number);
        }
        else if (Input == "ld")
        {
            an.deleteEnd();
        }
        else if (Input == "p")
        {
            an.display();
        }
        else if (Input == "s")
        {
            an.display_Size();
        }
        else if (Input == "f")
        {
            int number;
            cout << endl
                 << "Enter the number : ";
            cin >> number;
            an.First_Insert(number);
        }
        else if (Input == "fd")
        {
            an.First_delete();
        }
        else if (Input == "c")
        {
            int number, index;
            cout << endl
                 << "Enter Index number : ";
            cin >> index;
            cout << endl
                 << "Enter the number : ";
            cin >> number;
            an.change_element(number, index);
        }

        else if (Input == "e")
        {
            return 0;
        }

        else
        {
            cout << endl
                 << "Invalid Input " << endl
                 << " ";
        }

    } while (1);
}