# include <bits/stdc++.h>

using namespace std;

int power(int a, int b);
int BinaryToDecimal(int n);
int DecimalToBinary(int n);
int DecimalToOctal(int n);
string DecimalToHexadecimal(int n);

int main()
{
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << "Decimal equivalent of " << n << " is " << BinaryToDecimal(n) << endl;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Binary equivalent of " << n << " is " << DecimalToBinary(n) << endl;
    cout << "Octal equivalent of " << n << " is " << DecimalToOctal(n) << endl;
    cout << "Hexadecimal equivalent of " << n << " is " << DecimalToHexadecimal(n) << endl;
    return 0;
}

int power(int a, int b){
    int sum = 1;
    for(int i = 0; i < b; i++)
        sum *= a;
    return sum;
}

int BinaryToDecimal(int n)
{
    int sum = 0;
    for(int i = 0; n != 0; i++)
    {
        sum += (n % 10) * power(2, i);
        n /= 10;
    }
    return sum;
}

int DecimalToBinary(int n)
{
    int sum = 0;
    for(int i = 0; n != 0; i++)
    {
        sum += (n % 2) * power(10, i);
        n /= 2;
    }
    return sum;
}

int DecimalToOctal(int n)
{
    int sum = 0;
    for(int i = 0; n != 0; i++)
    {
        sum += (n % 8) * power(10, i);
        n /= 8;
    }
    return sum;
}

string DecimalToHexadecimal(int n)
{
    int N = 0;
    string sum = "";
    for(int i = 0; n != 0; i++)
    {
        N = n % 16;
        n /= 16;
        if(N < 10){
            sum = to_string(N) + sum;
        }
        else if(N >= 10 && N <= 15){
            sum = ((char)(N + 55)) + sum;
        }
    }
    return sum;
}