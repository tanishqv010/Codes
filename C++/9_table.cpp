# include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << "Following is the table of " << n << " : " << endl ;
    for(int i = 1; i <= 10; i++){
        cout << n << "*" << i << "=" << n*i << endl;
    }
    return 0;
}