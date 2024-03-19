#include <iostream>

using namespace std;

bool binary_search(int arr[], int start, int end, int target)
{

    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            cout << endl
                 << "The number " << target << " is in the array at index number " << mid << endl
                 << endl;
            return true;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
    }
    else
    {
        cout << endl
             << "The number is not in the Array" << endl
             << endl;
        return false;
    }
    binary_search(arr, start, end, target);
}

void random_arr_generator(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
}

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_array(int arr[], int size)
{
    cout << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl
         << endl;
}

int main()
{
    int size;
    cout << endl
         << "Enter the Size of the Array : ";
    cin >> size;
    int arr[size];

    random_arr_generator(arr, size);
    selection_sort(arr, size);
    print_array(arr, size);

    int number;

    cout << endl
         << "Enter the number you want to find : ";
    cin >> number;

    bool ans = binary_search(arr, 0, size - 1, number);

    return 0;
}