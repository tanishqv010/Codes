// Write a program of calculating the area and volume of cylinder by using user defined function.

#include <iostream>

using namespace std;

void area(int radius, int height){
    cout << "Area of cylinder is " << 2 * 3.14 * radius * height << endl;
}

void volume(int radius, int height){
    cout << "Volume of cylinder is " << 3.14 * radius * radius * height << endl;
}

int main(){
    int radius, height;
    cout << "Enter radius of cylinder: ";
    cin >> radius;
    cout << "Enter height of cylinder: ";
    cin >> height;
    area(radius, height);
    volume(radius, height);
    return 0;
}