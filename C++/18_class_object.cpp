# include<bits/stdc++.h>

using namespace std;

class student{
    public:
    string name;
    int roll;
};

int main(){
    student s1;
    s1.name = "Student1";
    s1.roll = 1;
    cout << "Details of Student 1" << endl << "Name: " << s1.name << " Roll No.: " << s1.roll << endl;
    student s2;
    s2.name = "Student2";
    s2.roll = 2;
    cout << "Details of Student 2" << endl << "Name: " << s2.name << " Roll No.: " << s2.roll << endl;
    return 0;
}