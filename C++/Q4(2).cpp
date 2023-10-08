/* Write a program of entering a large number (in Seconds) and convert it into hours, minutes, and seconds by using
user defined function.*/

#include <iostream>

using namespace std;

void convert(int seconds){
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;
    cout << "Time(in HH:MM:SS) " << hours << ":" << minutes << ":" << seconds << endl;
}

int main(){
    int seconds;
    cout << "Enter time(in seconds): ";
    cin >> seconds;
    convert(seconds);
    return 0;
}