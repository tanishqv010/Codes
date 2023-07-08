# include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, sum = 0, temp, count = 0;
    cin >> n;
    temp = n;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    temp = n;
    while (temp != 0)
    {
        sum += pow(temp % 10, count);
        temp /= 10;
    }
    if (sum == n)
        cout << "Narcisstic Number";
    else
        cout << "Not Narcisstic Number";
    return 0;
}