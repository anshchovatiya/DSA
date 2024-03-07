#include <iostream>

using namespace std;

void convert_string_to_array(string v, char *arr)
{
    int i = 0;

    while (v[i] != '\0')
    {
        arr[i] = v[i];
        i++;
    }

    arr[i] = '\0';
}

int main()
{
    string temp;

    cout << "enter the string : ";
    getline(cin, temp);

    char arr[50];
    convert_string_to_array(temp, arr);

    cout << arr << endl;

    return 0;
}