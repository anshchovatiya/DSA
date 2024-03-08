#include<iostream>

using namespace std;

#define Size 5
int top = -1;

class arr
{
    private :

    int Arr[Size];

    public :

    void Insertend(int number)
    {
         if(top>Size-2)
       {
        cout << endl << "The array is Full" << endl << " ";
       }
    else{
       Arr[++top] = number;
        }
    }

void display()
{
    if(top<0)
    {
        cout << endl << "The array is empty"<< endl << " ";
    }
    else
    {
        cout <<endl;
    for(int i=0;i<=top;i++)
    {
        cout << Arr[i] << " " ;
    }
    cout << endl <<" ";
    }
}
void deleteEnd()
{
      if(top<0)
    {
        cout << endl << "The array is empty"<< endl << " ";
    }
    else
    {
    --top;
    }
}
};

int main()
{
    arr an;

  char Input;

    do
    {
    cout << endl << "Input element press i" ;
    cout << endl << "Delete last element press d " ;
    cout << endl << "Display elements press p";
    cout << endl << "Exit press e" << endl << " ";


    cout << endl << "Enter your Choise : " ;
    cin >> Input;

    if(Input == 'i')
    {   int number;
        cout << endl << "Enter the number : ";
        cin >> number;
        an.Insertend(number);
    }
    else if (Input == 'd')
    {
        an.deleteEnd();
    }
    else if(Input == 'p')
    {
        an.display();
    }
    else
    {
       return 0;
    }



    }while(1);
 
}