# include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, yx, yz, z;
    while(true){
        cout << "\n\n\nEnter the order of first matrix : ";
        cin >> x >> yx;
        cout << "\nEnter the order of second matrix : ";
        cin >> yz >> z;
        if(yx == yz){
            y = yx;
            break;
        }else{
            cout << "\nThe matrices of the entered order cannot be multiplied. Enter again!!\n";
        }
    }
    int arr1[x][y], arr2[y][z], arr3[x][z];
    cout << "\nEnter the elements of 1st matrix" << endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> arr1[i][j];
        }
    }
    cout << "\nEnter the elements of 2nd matrix" << endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> arr2[i][j];
        }
    }
    cout << "\nFollowing are the elements of 3rd matrix" << endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < z; j++){
            arr3[i][j] = 0;
            for(int k = 0; k < y; k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}