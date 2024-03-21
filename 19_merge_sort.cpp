#include <iostream>

using namespace std;

void merge_array(int *arr, int start, int mid, int end)
{
    int arr1_length = mid - start + 1;
    int arr2_length = end - mid;

    int *arr1 = new int[arr1_length];
    int *arr2 = new int[arr2_length];

    int i = start;
    int v = 0;
    while (v < arr1_length)
    {
        arr1[v++] = arr[i++];
        // cout << arr1[v] << endl;
    }

    i = mid + 1;
    int t = 0;
    while (t < arr2_length)
    {
        // cout << arr2[t] << endl;
        arr2[t++] = arr[i++];
    }

    i = start;
    v = 0;
    t = 0;

    while (v < arr1_length && t < arr2_length)
    {
        if (arr1[v] < arr2[t])
        {
            arr[i++] = arr1[v++];
        }
        else
        {
            arr[i++] = arr2[t++];
        }
    }

    while (v < arr1_length)
    {
        arr[i++] = arr1[v++];
    }
    while (t < arr2_length)
    {
        arr[i++] = arr2[t++];
    }

    delete[] arr1;
    delete[] arr2;
}

void merge_sort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);

    merge_array(arr, start, mid, end);
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
    int arr[30];

    random_arr_generator(arr, 30);

    print_array(arr, 30);
    merge_sort(arr, 0, 29);
    print_array(arr, 30);

    return 0;
}

//  int mid = start + (end - start) / 2;

//     int first_length = mid - start + 1;
//     int second_length = end - mid;

//     int *arr1 = new int[first_length];
//     int *arr2 = new int[second_length];

//     for (int i = start, k = 0; k < first_length; i++, k++)
//     {
//         arr1[k] = arr[i];
//     }

//     for (int i = mid + 1, k = 0; k < second_length; i++, k++)
//     {
//         arr2[k] = arr[i];
//     }

//     int main_index = start;
//     int index1 = 0;
//     int index2 = 0;

//     while (index1 < first_length && index2 < second_length)
//     {
//         if (arr1[index1] < arr2[index2])
//         {
//             arr[main_index++] = arr1[index1++];
//         }
//         else
//         {
//             arr[main_index++] = arr2[index2++];
//         }
//     }

//     while (index1 < first_length)
//     {
//         arr[main_index++] = arr1[index1++];
//     }
//     while (index2 < second_length)
//     {
//         arr[main_index++] = arr2[index2++];
//     }