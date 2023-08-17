# include<bits/stdc++.h>

using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Following is the array" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "Sum of the elements of array is " << sum;
    cout << "Average of the elements of array is " << sum/n;
    return 0;
}