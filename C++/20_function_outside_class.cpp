# include<bits/stdc++.h>

using namespace std;

class student{
    public:
    void print(string name, int roll);
};

void student::print(string name, int roll){
    cout << "Name: " << name << " Roll No.: " << roll << endl;
}

int main(){
    cout << "Details of Students" << endl;
    student s1;
    s1.print("Student 1", 1);
    student s2;
    s2.print("Student 2", 2);
    return 0;
}