#include<iostream>

using namespace std;


int main()
{

   int n;

   cout << endl << "Enter size of the array : " ;
   cin >> n;

   int arr[n];

   for (int i=0 ;i <n ;i++)
   {
    cout << endl << "Enter elemet number " << i+1 << " : " ;
    cin >> arr[i];
   }

int temp = arr[0];
     arr[0] = arr[n-1];
     arr[n-1] = temp;


    
   for (int i=0 ;i <n ;i++)
   {
    cout << endl <<  i+1 << " elemet number  is " << arr[i];
 
   }




}