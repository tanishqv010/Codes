// Write a program to store and print 12 values entered by user.

#include <iostream>

using namespace std;

int main(){
    int arr[12];
    for (int i = 0; i < 12; i++)    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Values entered are: ";
    for (int i = 0; i < 12; i++)    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}