#include <iostream>

using namespace std;
int decimal_to_binary(int n);

int main(void)
{
    int N;

    do
    {
        cout << endl
             << "Note -> This program is only able to convert 1 to 1023 numbers in binary format" << endl
             << " ";
        cout << endl
             << "enter the numer you want to convert : ";
        cin >> N;

        int binary = decimal_to_binary(N);

        cout << endl
             << "The binary Number is " << binary << endl;
    } while (N != 0);
}

int decimal_to_binary(int n)
{
    int decimal[64];
    int i = 0;
    while (n != 0)
    {
        decimal[i] = n % 2;
        n /= 2;
        i++;
    }
    int number = 0;
    int v = --i;
    while (v >= 0)
    {
        number = (number * 10) + decimal[v];
        v--;
    }
    return number;
}
