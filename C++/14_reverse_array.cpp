# include<bits/stdc++.h>

using namespace std;

int mian(){
    int n;
    cout << "Enter the order of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int rev[n];
    for(int i=0; i<n; i++){
        rev[i] = arr[n-i-1];
    }
    cout << "Array is : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "Reversed array is : ";
    for(int i=0; i<n; i++){
        cout << rev[i] << " ";
    }
    return 0;
}