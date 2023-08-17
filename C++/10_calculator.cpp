# include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    char op;
    cout << "Enter the operation to be performed : ";
    cin >> a >> op >> b;
    switch(op){
        case '+' :
            cout << a+b;
            break;
        case '-' :
            cout << a-b;
            break;
        case '*' :
            cout << a*b;
            break;
        case '/' :
            cout << a/b;
            break;
        default :
            cout << "Invalid operator";
    }
    return 0;
}