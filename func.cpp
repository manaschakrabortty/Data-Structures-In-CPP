// What is a Function?
// A function is a block of code that performs a specific task. You define a function once, and you can "call" or "invoke" it multiple times
// throughout your program.

// Components of a Function
// Return Type: The data type of the value that the function returns. 
// It could be any valid C++ data type like int, float, char, void, etc. If the function does not return a value, 
// its return type should be void.

// Function Name: A unique identifier for the function. You use this name when calling the function.

// Parameters: A function can take input values (called arguments or parameters). These are passed to the function when it is called.

// Function Body: The block of code enclosed in curly braces {} that defines what the function does.

// Return Statement: (Optional) If the function returns a value, the return statement sends that value back to the calling code.

// ***Syntax of a Function

// return_type function_name(parameter1_type parameter1, parameter2_type parameter2, ...) {
//     // Code inside the function
//     return value; // Optional, based on the return type
// }
// How Functions Work:
// Function Declaration (Prototype): A declaration tells the compiler about a function's name, return type, and parameters. 
// It's like a promise that the function will exist somewhere in the code.

// Function Definition: This is where you write the actual code of the function.

// Function Call: Once you define a function, you can call it from the main() function or any other part of your code.
// #include <iostream>
// using namespace std;

// // Function declaration
// int add(int a, int b);

// // Main function
// int main() {
//     int num1, num2, sum;
    
//     // Asking user to input two numbers
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
    
//     // Calling the add function and storing the result in sum
//     sum = add(num1, num2);
    
//     // Printing the result
//     cout << "Sum = " << sum << endl;
    
//     return 0;
// }

// // Function definition
// int add(int a, int b) {
//     return a + b;  // Return the sum of a and b
// }
// Function Declaration: int add(int a, int b); tells the compiler that the function add will take two integers as parameters and return an integer.

// Function Definition: int add(int a, int b) { return a + b; } is the actual code of the function. It takes two integers, adds them, and returns the result.

// Function Call: sum = add(num1, num2); calls the function add with the values num1 and num2. The result is stored in sum.

// Types of Functions:
// Void Functions: A function that doesn’t return any value. Its return type is void.
// void greet() {
//     cout << "Hello, welcome to C++!" << endl;
// }
// Functions with Parameters: Functions that take input arguments (parameters) when called.

// void display(int number) {
//     cout << "The number is: " << number << endl;
// }
// Functions with Return Values: Functions that return a value to the calling function.


// int square(int n) {
//     return n * n;
// }



// Function Overloading
// Function overloading allows you to define multiple functions with the same name but different types or numbers of parameters.
// The compiler determines which function to call based on the number and types of arguments passed during the function call.

// Example of Function Overloading:

// #include <iostream>
// using namespace std;

// // Overloaded function to add two integers
// int add(int a, int b) {
//     return a + b;
// }

// // Overloaded function to add two floating-point numbers
// float add(float a, float b) {
//     return a + b;
// }

// // Overloaded function to add three integers
// int add(int a, int b, int c) {
//     return a + b + c;
// }

// int main() {
//     int int1 = 5, int2 = 10, int3 = 15;
//     float float1 = 3.5, float2 = 2.3;
    
//     // Calling the overloaded add functions
//     cout << "Sum of two integers: " << add(int1, int2) << endl;      // Calls int add(int, int)
//     cout << "Sum of two floats: " << add(float1, float2) << endl;    // Calls float add(float, float)
//     cout << "Sum of three integers: " << add(int1, int2, int3) << endl; // Calls int add(int, int, int)
    
//     return 0;
// }

// The function add is defined three times, each with different types or numbers of parameters.
// The function to be called is determined based on the number and types of arguments passed.
// add(int, int) adds two integers.
// add(float, float) adds two floats.
// add(int, int, int) adds three integers.
// Output:
// mathematica

// Sum of two integers: 15
// Sum of two floats: 5.8
// Sum of three integers: 30
// 2. Default Arguments
// Default arguments allow you to specify default values for function parameters. If no value is provided for a parameter 
// when calling the function, the default value is used.

// Example of Default Arguments:

// #include <iostream>
// using namespace std;

// // Function with default arguments
// void display(int a = 10, int b = 20) {
//     cout << "a = " << a << ", b = " << b << endl;
// }

// int main() {
//     // Calling display with no arguments, uses default values
//     display();  // Output: a = 10, b = 20

//     // Calling display with one argument, overrides the default for 'a'
//     display(100);  // Output: a = 100, b = 20

//     // Calling display with two arguments, overrides both default values
//     display(100, 200);  // Output: a = 100, b = 200
    
//     return 0;
// }

// The function display has default values for a and b (a = 10, b = 20).
// If no values are provided when calling display(), the default values are used.
// If one or both values are provided, the defaults are overridden.
// Output:

// a = 10, b = 20
// a = 100, b = 20
// a = 100, b = 200

// Function Overloading is useful when you need the same function name for different parameter types or numbers, which keeps code
// organized and clean.
// Default Arguments allow for flexible function calls, providing default behavior while still allowing the caller to customize the
// function's behavior.



// #include <iostream>
// using namespace std;
// int sum(int a,int b){
//     int d = a+b;
//     return d;
// }
// int main(){
//     cout <<sum(3,5)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// float sum(float a,float b){//use double 
//     float d = a+b;
//     return d;
// }
// double min(double c,double d){//parameters
//     double m =c-d;
//     return m;
// }
// int main(){
//     // cout <<sum(3,5)<<endl;
//     // return 0;
//     cout <<min(9.99,4.89)<<endl;//arguments
//     return 0;
// }

//SUM1-N
// #include <iostream>
// using namespace std;
// int  sumN(int n){
//     int sum =0;
//     for(int i=0; i<=n;i++){
//         sum += i;
//     }
//     return sum;
// }
// int main(){
//     cout <<sumN(5)<<endl;
//     return 0;
// }
//CALCULATE N FACTORIAL
// #include <iostream>
// using namespace std;
// int  factN(int n){
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         // fact=fact*i;
//         fact *=i;
//     }
//     return fact;
// }
// int main(){
//     cout <<factN(5)<<endl;
//     return 0;
// }

//SUM OF A DIGIT OF A NUM
// #include <iostream>
// using namespace std;
// int  sumN(int num){
//     int digSum =0;
//     while(num >0){
//         int lastdigit =num%10;
//         num/=10;
//         digSum +=lastdigit;
//     }
//     return digSum;
// }
// int main(){
//     cout <<sumN(532)<<endl;
//     return 0;
// } 

//CALCULATE nCr biomial coefficient for n&r
#include <iostream>
using namespace std;
int  factroial(int n){
    int fact =1;
    for (int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}
int ncr(int n,int r){
    int fact_n =factroial(n);
    int fact_r =factroial(r);
    int fact_nmr =factroial(n-r);
    return fact_n /(fact_r *fact_nmr);

}
int main(){
    int n=8,r=2;
    cout <<ncr(n,r)<<endl;
    return 0;
}