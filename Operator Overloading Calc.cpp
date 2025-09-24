// Exp - 12
// Siddhesh 
// 25070123505 (A3)

#include <iostream>
using namespace std;
class Calc{
    int num;
public:
    Calc(int n =0){
        num =n;
    }
    Calc operator+(Calc &obj){
        Calc add;
        add.num = num +obj.num;
        return add;
    }
    Calc operator-(Calc &obj){
        Calc sub;
        sub.num = num -obj.num;
        return sub;
    }
    Calc operator*(Calc &obj){
        Calc mul;
        mul.num = num *obj.num;
        return mul;
    }
    Calc operator/(Calc &obj){
        Calc div;
        div.num = num /obj.num;
        return div;
    }
    void disp(){
        cout << num <<endl;
    }
};
int main() {
    Calc c1(100),c2(20);
    Calc c3 = c1+c2;
    Calc c4 = c1-c2;
    Calc c5 = c1*c2;
    Calc c6 = c1/c2;
    cout << "Addition: ";
    c3.disp();
    cout << "Subtraction: ";
    c4.disp();
    cout << "Multiplication: ";
    c5.disp();
    cout << "Division: ";
    c6.disp();
    return 0;
}

Output :-
Addition: 120
Subtraction: 80
Multiplication: 2000
Division: 5


=== Code Execution Successful ===
