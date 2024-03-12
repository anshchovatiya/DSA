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

            --top;
        }
    }

    void Insertend(int number)
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

    arr an(10);

    char Input;

   
    do
    {
        cout << endl
             << "Input first element press t";
        cout << endl
             << "Delete first element press e";
        cout << endl
             << "Input last element press i";
        cout << endl
             << "Delete last element press d";
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
        else if (Input == 't')
        {
            int number;
            cout << endl
                 << "Enter the number : ";
            cin >> number;
            an.First_Insert(number);
        }
        else if (Input == 'e')
        {
            an.First_delete();
        }

        else
        {
            return 0;
        }

    } while (1);
}