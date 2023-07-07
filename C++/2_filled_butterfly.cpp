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
            cout << "*";
        }
        for(int k = n - j; k >= 0; k--){
            cout << "  ";
        }
        for(int l = 1; l <= i; l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n; i >= 1; i--){
        int j;
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        for(int k = n - j; k >= 0; k--){
            cout << "  ";
        }
        for(int l = 1; l <= i; l++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}