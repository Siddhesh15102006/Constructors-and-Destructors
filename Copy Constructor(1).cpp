// Exp - 12
// Siddhesh 
// 25070123505 (A3)

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    long long int r_no;

public:
    Student()
    {
        name = "[USER]";
        r_no = 0;
    }

    void set_name(string x)
    {
        name = x;
    }

    void set_r_no(long long int x){
        r_no = x;
    };

    void display() {
        cout << name << " :- " << r_no << endl;
    };
};

int main(void)
{
    Student s;
    s.set_name("Siddhesh Gajare");
    s.set_r_no(25070123505LL);
    s.display();
    return 0;
}

Output :-
Siddhesh Gajare :- 25070123505


=== Code Execution Successful ===
