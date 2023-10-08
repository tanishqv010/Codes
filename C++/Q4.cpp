// Write a program to compute the area of a rectangle and circle using function overloading.

#include <iostream>

using namespace std;

int area(int length, int breadth){
    return length * breadth;
}

float area(float radius){
    return 3.14 * radius * radius;
}

int main(){
    int length, breadth;
    float radius;
    cout << "Enter length and breadth of rectangle: " << area(length, breadth) << endl;
    cout << "Enter radius of circle: " << area(radius) << endl;
    return 0;
}