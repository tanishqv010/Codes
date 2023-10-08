// Write a program to store 24 values in an array and print the values entered by the user.

#include <iostream>

using namespace std;

int main(){
    int arr[24];
    for (int i = 0; i < 24; i++)    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Values entered are: ";
    for (int i = 0; i < 24; i++)    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}