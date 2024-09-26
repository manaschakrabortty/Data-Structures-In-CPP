// #include <iostream>
// using namespace std;

// int main(){
//     cout << "MANASA";
//     return 0;
// }
// data_type variable_name;

// #include <iostream>
// using namespace std;

// int main() {
//     int age = 25;          // Integer variable
//     double salary = 55000.5; // Double (floating point) variable
//     char grade = 'A';       // Character variable
//     bool isEmployed = true; // Boolean variable

//     cout << "Age: " << age << endl;
//     cout << "Salary: " << salary << endl;
//     cout << "Grade: " << grade << endl;
//     cout << "Employed: " << isEmployed << endl;

//     return 0;
// }


// Data Types
// C++ has various data types that determine the size and type of data that can be stored in a variable.

// Common Data Types:

// int: Stores integers (e.g., 10, -5).
// float: Stores floating-point numbers (e.g., 3.14, -0.001).
// double: Stores double-precision floating-point numbers.
// char: Stores a single character (e.g., 'a', '1').
// bool: Stores boolean values (true or false).

// #include <iostream>
// using namespace std;

// int main() {
//     int num = 10;
//     float pi = 3.14f;
//     double e = 2.71828;
//     char letter = 'C';
//     bool isTrue = true;

//     cout << "Integer: " << num << endl;
//     cout << "Float: " << pi << endl;
//     cout << "Double: " << e << endl;
//     cout << "Character: " << letter << endl;
//     cout << "Boolean: " << isTrue << endl;

//     return 0;
// }


// Operators
// Operators in C++ are symbols that perform operations on variables and values.

// Types of Operators:

// Arithmetic Operators: +, -, *, /, %
// Assignment Operators: =, +=, -=, *=, /=
// Comparison Operators: ==, !=, >, <, >=, <=
// Logical Operators: &&, ||, !
// Increment/Decrement Operators: ++, --


// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10, b = 20;

//     // Arithmetic Operators
//     cout << "a + b = " << (a + b) << endl;
//     cout << "a - b = " << (a - b) << endl;
//     cout << "a * b = " << (a * b) << endl;
//     cout << "b / a = " << (b / a) << endl;
//     cout << "b % a = " << (b % a) << endl;

//     // Comparison Operators
//     cout << "a == b: " << (a == b) << endl;
//     cout << "a != b: " << (a != b) << endl;
//     cout << "a > b: " << (a > b) << endl;
//     cout << "a < b: " << (a < b) << endl;

//     // Logical Operators
//     cout << "(a > 5) && (b > 5): " << ((a > 5) && (b > 5)) << endl;
//     cout << "(a > 5) || (b > 25): " << ((a > 5) || (b > 25)) << endl;
//     cout << "!(a == b): " << (!(a == b)) << endl;

//     // Increment/Decrement Operators
//     cout << "a++ = " << a++ << endl;
//     cout << "++b = " << ++b << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cout << "Enter a:";
//     cin >>a;
//     cout << "Enter b:";
//     cin >>b;
//     int sum =a+b;
//     int diff =a-b;
//     int mul =a*b;
//     int div =a/b;
//     int mod =a%b;
//     cout<<"sum="<<sum<<endl;
//     cout<<"diff="<<diff<<endl;
//     cout<<"mul="<<mul<<endl;
//     cout<<"div="<<div<<endl;
//     cout<<"mod="<<mod<<endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int amin(){
    int n= 5;
    int arr[5] ={1,2,3,4,5};
    for(int start =0; start<n;start++){
        for(int end =start; end<n;end++){
            for(int i=start;i<=end;i++){
                cout <<arr[i];
            }
            cout << " ";
        }
        cout <<endl;
    }
    return 0;
}