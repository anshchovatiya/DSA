#include<iostream>

using namespace std;

int main()
{
    int first;

    cout << endl << "Enter size of the first array : " ;
    cin >> first;

    int arr1[first];

    for(int i=0;i<first;i++)
    {
        cout << endl << "Enter element number " << i+1 << " : " ;
        cin >> arr1[i];
    }


    int second;

    cout << endl << "Enter size of the first array : " ;
    cin >> second;

    int arr2[second];

    for(int i=0;i<second;i++)
    {
        cout << endl << "Enter element number " << i+1 << " : " ;
        cin >> arr2[i];
    }

    int third = first + second;
    int arr3[third];

    int i=0;

    while(i<first)
    {
        arr3[i] = arr1[i];
        i++;
    }

    int v=0;
    while(v<second).
    {
        arr3[i++] = arr2[v];
        v++;
        
    }
    // arr3[i] = '\0';


    for(int t=0;t<third;t++)
    {
        cout << arr3[t] << "  " ; 
    }



}
