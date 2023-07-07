# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        int j;
        for(j = 1; j <= i; j++){
            if(j == 1 || j == i){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        for(int k = n - j; k >= 0; k--){
            cout << "  ";
        }
        for(int l = 1; l <= i; l++){
            if(l == 1 || l == i){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i = n; i >= 1; i--){
        int j;
        for(j = 1; j <= i; j++){
            if(j == 1 || j == i){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        for(int k = n - j; k >= 0; k--){
            cout << "  ";
        }
        for(int l = 1; l <= i; l++){
            if(l == 1 || l == i){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}