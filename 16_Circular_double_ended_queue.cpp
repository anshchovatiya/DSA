
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
    void Insert_rear(int number)
    {

        if (((rear + 1) % size) == front)
        {
            cout << endl
                 << "Array is Full " << endl
                 << endl;
        }
        else if (front == -1 && rear == -1)
        {

            front++;
            rear++;
            arr[rear] = number;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = number;
        }
    }

    // this function will delete the rear element of the array
    void Delete_rear()
    {
        if (front == -1 && rear == -1)
        {
            cout << endl
                 << "Array is Empty" << endl
                 << endl;
        }
        else if (((rear - 1) % size) == front)
        {
            front = rear = -1;
        }
        else
        {
            rear = ((rear - 1) % size);
        }
    }

    // this function will display the array
    void Display()
    {
        if (front >= 0)
        {
            cout << endl
                 << endl;

            int i = front;

            do
            {
                cout << arr[i] << " ";
                i = (i + 1) % size;
            } while (i != rear);

            cout << arr[i] << " ";
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

    // this function will insert element at the front position of the array
    void Insert_front(int number)
    {
        if (((rear + 1) % size) == front)
        {
            cout << endl
                 << "Array is Full " << endl
                 << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = number;
        }
        else
        {
            for (int i = rear, v = rear + 1; i >= front; i = ((i - 1) % size), v = ((v - 1) % 100))
            {
                arr[v] = arr[i];
            }
            arr[front] = number;
            rear++;
        }
    }

    // this funcion will delete the front element off the array
    void Delete_front()
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
            for (int i = front; i < rear; i++)
            {
                arr[i] = arr[i + 1];
            }
            rear = (rear - 1) % size;
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
             << "Insert front Element   -> 1" << endl;
        cout << "Delete front Element   -> 2" << endl;
        cout << "Display Elements       -> 3" << endl;
        cout << "Insert rear Element    -> 4" << endl;
        cout << "Delete rear Element    -> 5" << endl;
        cout << "Exit                   -> 0" << endl;

        cout << endl
             << "Enter Your Choise : ";
        cin >> n;

        if (n == 1)
        {
            int number;
            cout << endl
                 << "Enter the number : ";
            cin >> number;
            arr1.Insert_front(number);
        }
        else if (n == 2)
        {
            arr1.Delete_front();
        }
        else if (n == 3)
        {
            arr1.Display();
        }
        else if (n == 4)
        {
            int number;
            cout << endl
                 << "Enter the number : ";
            cin >> number;
            arr1.Insert_rear(number);
        }
        else if (n == 5)
        {
            arr1.Delete_rear();
        }
    } while (n != 0);
    return 0;
}