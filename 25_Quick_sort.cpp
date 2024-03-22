#include <iostream>

using namespace std;

int partition(int *arr, int start, int end)
{

    // finding random index value for pivot
    int mid = start + (end - start) / 2;
    int pivot = arr[mid];

    // swap that index number element to first index
    swap(arr[mid], arr[start]);

    int count = 0;
    // counting how many element are smaller than pivot
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < pivot)
        {

            count++;
        }
    }

    // calculating pivot right index
    int pivotIndex = count + start;

    // transferring pivot to its right place
    swap(arr[start], arr[pivotIndex]);

    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        // if element is smaller than pivot i will be incremented
        while (arr[i] < pivot)
        {
            i++;
        }
        // if element is greater than pivot j will be decremented
        while (arr[j] > pivot)
        {
            j--;
        }
        // i index element and j index element will swap their location
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }

    // returning pivot Index to divide the array in Quick sort function
    return pivotIndex;
}

void Quick_sort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    // initializing pivot element and transfer it to it's right place
    int pivot = partition(arr, start, end);

    // dividing array that is left side of the pivot
    Quick_sort(arr, start, pivot - 1);
    // dividing array that is right side of the pivot
    Quick_sort(arr, pivot + 1, end);
}

void random_arr_generator(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
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
    int n = 50;

    int arr[n];

    random_arr_generator(arr, n);
    print_array(arr, n);
    Quick_sort(arr, 0, n - 1);
    print_array(arr, n);
}