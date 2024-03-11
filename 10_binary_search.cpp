#include<iostream>

using namespace std;

// function to perform binary search 
void Binary_search(int arr[],int length,int target)
{
    int start = 0;
    int end = length - 1;
    int check = 0;
    while(start<=end)
    {
      int middle = (start + end)/2;

        if(arr[middle] == target)
        {
            cout << endl << "The number " << target << " is in the target at position " << middle + 1 << endl << " ";
            check = 1;
            break;
        }
        else if(arr[middle]>target)
        {
            end = middle-1;
        }
        else if(arr[middle]<target)
        {
            start = middle + 1;
        }
    }

    if(check==0)
    {
        cout << endl << "The number " << target << " is not in the array "  << endl << " ";
    }
}



int main()
{

    int arr[10] = {1,3,4,8,29,50,56,91,92,113};

    int number;
    
    cout << endl << "Enter the number you want to find : ";
    cin >> number;

    // functin to perform binary serch

    Binary_search(arr,10,number);
}
