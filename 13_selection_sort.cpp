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

// this function will sort the array with using selection sort method
void SelectionSort(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}

int main()
{
    int n;

    cout << "Enter the Size of the array : ";
    cin >> n;

    int Array[n];

    Random_Genertor(Array, n);
    print_array(Array, n);
    SelectionSort(Array, n);
    print_array(Array, n);

    return 0;
}