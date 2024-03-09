#include<iostream>

using namespace std;



class Array
{
    int *arr;
    int Size;
    
    public :    

    Array(int size)
    {
        arr = new int[size];
        Size = size;


        for(int i=0;i<Size;i++)
    {
        arr[i] =( rand()%100)+1;
    }

    }

    void FindEelment()
    {   
        cout << endl;
           for(int i=0;i<Size;i++)
      {
        cout  << arr[i] << " ";
       }
    cout << endl;

    int number;
    cout  << endl << "Enter the element you want to Find : " ;
    cin >> number;

    int check = 0;

     for(int i=0;i<Size;i++)
     {       
        if(number == arr[i])
        {
            cout << endl << "The number is in the array and index value of the number is " << i << endl << " ";
            check = 1;
            break;
        }
     }

     if(check ==0)
     {
        cout << endl << "The number is not in the array" << endl << " " ;
     }

    }
};



int main()
{
    int n;

    cout << endl << "Enter the size of the array : ";
    cin >> n;

    Array arr(n);


    arr.FindEelment();
    


}

