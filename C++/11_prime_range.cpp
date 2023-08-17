# include <bits/stdc++.h>

using namespace std;

int main(){
    int ll, ul, j, count = 0;
    cout << "Enter Lower Limit : ";
    cin >> ll;
    cout << "Enter Upper Limit : ";
    cin >> ul;
    if(ll < 2){
        ll = 2;
    }
    cout << endl << "Following numbers are print in the entered range" << endl;
    for(int i = ll; i <= ul; i++){
        for(j = 2; j <= i; j++){
            if(i % j == 0){
                break;
            }
        }
        if(i == j){
            count++;
            cout << i << endl;
        }
    }
    cout << endl << "Number of primes in the entered range is " << count;
    return 0;
}