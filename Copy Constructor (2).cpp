// Exp - 12
// Siddhesh 
//25070123505 (A3)

#include <iostream>
#include <string>
using namespace std;

class Name {
private:
    double sum;
public:
   
        Name(char A, char B) {
        cout<<A;
        cout<<B<<endl;
    }


       Name(string a, string b) {
        cout  << a+b << endl;
    }
};
    
int main() {
    Name A1('A','B');  
    Name A2("Siddhesh","Gajare");                 
    return 0;
}

Output :-
AB
SiddheshGajare


=== Code Execution Successful ===
