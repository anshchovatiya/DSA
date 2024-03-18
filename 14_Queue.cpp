#include <iostream>

using namespace std;

class Queue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue(int S)
    {
        size = S;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    // this function will insert element in queue
    void Insert(int number)
    {
        if (front == -1 && rear == -1)
        {

            front++;
            rear++;
            arr[rear] = number;
        }
        else if (rear >= size - 1)
        {
            cout << endl
                 << "Array is Full " << endl
                 << endl;
        }
        else
        {
            rear++;
            arr[rear] = number;
        }
    }

    // this function will display the array
    void Display()
    {
        if (front >= 0)
        {
            cout << endl
                 << endl;
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "Array is Empty" << endl
                 << endl;
        }
    }

    // this funcion will delete the first element off the array
    void Delete()
    {
        if (front < 0)
        {
            cout << endl
                 << "Array is Empty " << endl
                 << endl;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
};

int main()
{
    int Size;
    cout << endl
         << "Enter the Size of The Array : ";
    cin >> Size;
    Queue arr1(Size);
    int n;
    do
    {
        cout << endl
             << "Insert Element   -> 1" << endl;
        cout << "Delete Element   -> 2" << endl;
        cout << "Display Elements -> 3" << endl;
        cout << "Exit             -> 0            " << endl;

        cout << endl
             << "Enter Your Choise : ";
        cin >> n;

        if (n == 1)
        {
            int number;
            cout << endl
                 << "Enter the number : ";
            cin >> number;
            arr1.Insert(number);
        }
        else if (n == 2)
        {
            arr1.Delete();
        }
        else if (n == 3)
        {
            arr1.Display();
        }
    } while (n != 0);
}