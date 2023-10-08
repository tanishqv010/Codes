# include<bits/stdc++.h>

using namespace std;

class student{
    public:
    string name;
    int roll;
    void print(){
        cout << "Name: " << name << " Roll No.: " << roll << endl;
    }
};

int main(){
    cout << "Details of Students" << endl;
    student s1;
    s1.name = "Student1";
    s1.roll = 1;
    s1.print();
    student s2;
    s2.name = "Student2";
    s2.roll = 2;
    s2.print();
    return 0;
}