// Write a program of sum of diagonal elements of matrix.

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int arr[n][n];
    cout << "Enter elements of matrix: " << endl;
    for (int i = 0; i < n; i++)    {
        for (int j = 0; j < n; j++)        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)    {
        sum += arr[i][i];
    }
    cout << "Sum of diagonal elements of matrix is " << sum << endl;
    return 0;
}