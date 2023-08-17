# include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    if(n >= 80){
        cout << "Grade is A";
    }else if(n >= 70){
        cout << "Grade is AB";
    }else if(n >= 60){
        cout << "Grade is B";
    }else if(n >= 50){
        cout << "Grade is BC";
    }else if(n >= 40){
        cout << "Grade is C";
    }else if(n >= 30){
        cout << "Grade is D";
    }else{
        cout << "Grade is F";
    }
}