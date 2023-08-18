# include<bits/stdc++.h>

using namespace std;

int mian(){
    int n, x, count = 0;
    cout << "Enter the order of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter the element for which you want to count the occurance : ";
    cin >> x;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            count++;
        }
    }
    cout << "Occurance of " << x << " is " << count << endl;
    return 0;
}