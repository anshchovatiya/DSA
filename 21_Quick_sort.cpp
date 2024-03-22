#include <iostream>

using namespace std;

void random_array_generator(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
}

void print_array(int *arr, int size)
{
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl
         << endl;
}

void Quick_sort(int *arr, int first, int last)
{
    int pivot, i, j;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < last)
            {
                i++;
            }
            while (arr[pivot] < arr[j])
            {
                j++;
            }

            if (i < j)
            {
                swap(arr[pivot], arr[j]);
            }
        }

        swap(arr[j],arr[pivot]);


        Quick_sort(arr, first, j - 1);
        Quick_sort(arr, j + 1, last);
    }
}

int main()
{
    int arr[40];
    random_array_generator(arr, 40);
    print_array(arr, 40);
    Quick_sort(arr, 0, 39);
    print_array(arr, 40);

    return 0;
}