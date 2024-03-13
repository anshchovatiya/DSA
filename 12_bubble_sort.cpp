#include <iostream>

using namespace std;

// this function will assign random numbers to array
void Random_Genertor(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = (rand() % 100) + 1;
    }
}

// this function will print the array
void print_array(int arr[], int length)
{
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

// this function will sort the array using bubble sort method
void sort_array(int arr[], int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 0; j < length - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int n;

    cout << endl
         << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    Random_Genertor(arr, n);
    print_array(arr, n);
    sort_array(arr, n);
    print_array(arr, n);
}