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

    void Insertend(int number)
    {
        if (top > Size - 2)
        {
            cout << endl
                 << "The array is Full" << endl
                 << " ";
        }
        else
        {
            cout << endl
                 << "The array has been created" << endl
                 << " ";
            Arr[++top] = number;
        }
    }

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
};

int main()
{
    int n;
    cout << endl
         << "Enter the size of the array : ";
    cin >> n;

    arr an(n);

    char Input;

    do
    {
        cout << endl
             << "Input element press i";
        cout << endl
             << "Delete last element press d ";
        cout << endl
             << "Display elements press p";
        cout << endl
             << "Display size of the array s";
        cout << endl
             << "Exit press e" << endl
             << " ";

        cout << endl
             << "Enter your Choice : ";
        cin >> Input;

        if (Input == 'i')
        {
            int number;
            cout << endl
                 << "Enter the number : ";
            cin >> number;
            an.Insertend(number);
        }
        else if (Input == 'd')
        {
            an.deleteEnd();
        }
        else if (Input == 'p')
        {
            an.display();
        }
        else if (Input == 's')
        {
            an.display_Size();
        }
        else
        {
            return 0;
        }

    } while (1);
}