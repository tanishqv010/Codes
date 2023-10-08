/* Write a program to print the area of a rectangle by creating a class named 'Area' having two functions.
First function named as 'setDim' takes length and breadth of rectangle as parameters and the second function
named as 'getArea' returns the area of the rectangle. Length and breadth of rectangle are entered through keyboard. */

#include <iostream>

using namespace std;

class Area{
    private:
        int length, breadth;
    public:
        void setDim(){
            cout << "Enter length of rectangle: ";
            cin >> length;
            cout << "Enter breadth of rectangle: ";
            cin >> breadth;
        }
        int getArea(){
            return length * breadth;
        }
};

int main(){
    Area rect;
    rect.setDim();
    cout << "Area of the rectangle is " << rect.getArea() << endl;
    return 0;
}