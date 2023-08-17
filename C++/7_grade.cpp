# include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n >= 80){
        cout << "A";
    }else if(n >= 70){
        cout << "AB";
    }else if(n >= 60){
        cout << "B";
    }else if(n >= 50){
        cout << "BC";
    }else if(n >= 40){
        cout << "C";
    }else if(n >= 30){
        cout << "D";
    }else{
        cout << "F";
    }
}