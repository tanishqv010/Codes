# include <bits/stdc++.h>

using namespace std;

int main(){
    int ll, ul, j;
    cin >> ll >> ul;
    if(ll < 2){
        ll = 2;
    }
    for(int i = ll; i <= ul; i++){
        for(j = 2; j <= i; j++){
            if(i % j == 0){
                break;
            }
        }
        if(i == j){
            cout << i << endl;
        }
    }
    return 0;
}