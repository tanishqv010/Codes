# include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if(n > 0){
        cout << "Number is Positive";
    }else if(n < 0){
        cout << "Number is Negative";
    }else{
        cout << "Number is Zero";
    }
    return 0;
}