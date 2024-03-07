#include<iostream>

using namespace std;

int main()
{
    int n;

    cout << endl << "Enter size of the array : " ;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout << endl << "Enter element number " << i+1 << " : " ;
        cin >> arr[i];
      }
  cout << endl << " ";

      for(int i=0;i<n-1;i++)
      {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1]=temp;
      }
  
        for(int t=0;t<n;t++)
    {
        cout << arr[t] << "  " ; 
    }


       cout << endl << " ";
}