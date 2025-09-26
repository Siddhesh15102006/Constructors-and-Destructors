---
# 🧪 Experiment 12 :- Constructors and Destructors in CPP

---

##📖 Theory:

In C++, constructors and destructors are special member functions:

A constructor is automatically called when an object is created. It initializes the object.

A destructor is automatically called when the object goes out of scope or is explicitly deleted. It frees up resources.

Types of constructors:

Default Constructor

Parameterized Constructor

Copy Constructor

Other related concepts:

Function Overloading: Defining multiple functions with the same name but different parameters.

Operator Overloading: Redefining the way operators work for user-defined types (like classes).

---

📝 Experiment Questions and Answers
---
🔹 Q1. Copy Constructor
✅ Syntax:
ClassName(const ClassName &obj);

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

class Sample {
public:
    int data;

    // Parameterized constructor
    Sample(int d) {
        data = d;
    }

    // Copy constructor
    Sample(const Sample &obj) {
        data = obj.data;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Sample obj1(100);    // Normal constructor
    Sample obj2 = obj1;  // Copy constructor is called
    obj2.display();
    return 0;
}
```

---

🔹 Q2. Function Overloading
✅ Syntax:
ReturnType FunctionName(Parameter List);
ReturnType FunctionName(Different Parameter List);

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    void show(double d) {
        cout << "Double: " << d << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print obj;
    obj.show(10);
    obj.show(3.14);
    obj.show("Function Overloading");
    return 0;
}
```

---

🔹 Q3. Operator Overloading (Calculator)
✅ Syntax:
ReturnType operator+(const ClassName &obj);
ReturnType operator-(const ClassName &obj);
// etc.

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    int a, b;

    Calculator(int x = 0, int y = 0) {
        a = x;
        b = y;
    }

    // Overload + operator
    Calculator operator+(const Calculator &obj) {
        return Calculator(a + obj.a, b + obj.b);
    }

    // Overload - operator
    Calculator operator-(const Calculator &obj) {
        return Calculator(a - obj.a, b - obj.b);
    }

    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() {
    Calculator c1(10, 20), c2(5, 3);
    Calculator c3 = c1 + c2;  // Using overloaded +
    Calculator c4 = c1 - c2;  // Using overloaded -
    c3.display();  // Output: a: 15, b: 23
    c4.display();  // Output: a: 5, b: 17
    return 0;
}
```

---

✅ Conclusion:

We successfully implemented constructors (including copy constructors) and destructors in C++.

We learned how function overloading allows using the same function name with different parameter types.

We applied operator overloading to perform arithmetic operations using custom class objects (like in a calculator).

These object-oriented programming techniques enhance code reusability, readability, and modularity.

