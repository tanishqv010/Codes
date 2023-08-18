# include<bits/stdc++.h>

using namespace std;

int mian(){
    int m, n;
    cout << "Enter the order of array";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter the elements of array";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Array is : " << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}