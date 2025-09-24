// Exp - 11
// Siddhesh 
// 25070123505 (A3)

#include <iostream>
using namespace std;

class student {
    int age;
    string name;

public:
    student(string s, int a) {
        name = s;
        age = a;
    }
    student(const student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor Called." << endl;
        cout<<"This output is by the copy constructor : "<<endl;
    }

    void display() {
        cout << "Name : " << name << " Age : " << age << endl;
    }
};

int main() {
    student s1("Siddhesh", 19);
    student s2 = s1;       

    s1.display();
    s2.display();

    return 0;
}


Output :-
Copy Constructor Called.
This output is by the copy constructor : 
Name : Siddhesh Age : 19
Name : Siddhesh Age : 19


=== Code Execution Successful ===
