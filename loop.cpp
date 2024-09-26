// #include <iostream>
// using namespace std;
// int main(){
//     int n =-5;
//     if(n>=0){
//         cout <<"n is positive\n";
//     }else{
//         cout<<"n is negative";
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     // int age =17;
//     int age;
//     cout <<"Enter yor age: ";
//     cin >> age;
//     if (age>=18){
//         cout <<" age is greater than 18 you can drive baby\n";
//     }else{
//         cout<<"choti bachi ho kya";
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     // int odd_even =17;
//     int odd_even;
//     cout <<"Enter yor num: ";
//     cin >> odd_even;
//     if (odd_even%2==0){
//         cout <<" the num is even\n";
//     }else{
//         cout<<"the num is odd";
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int marks;

//     // Input marks
//     cout << "Enter your marks: ";
//     cin >> marks;

//     // Determine the grade using if, else if, and else statements
//     if (marks >= 90) {
//         cout << "Grade: A" << endl;
//     } 
//     else if (marks >= 80) {
//         cout << "Grade: B" << endl;
//     } 
//     else if (marks >= 70) {
//         cout << "Grade: C" << endl;
//     } 
//     else if (marks >= 60) {
//         cout << "Grade: D" << endl;
//     } 
//     else if (marks >= 50) {
//         cout << "Grade: E" << endl;
//     } 
//     else {
//         cout << "Grade: F (Fail)" << endl;
//     }

//     return 0;
// }


// #include <iostream>

// int main() {
//     char ch;


//     std::cout << "Enter a character: ";
//     std::cin >> ch;

//     if (ch >= 'A' && ch <= 'Z') {
//         std::cout << ch << " is an uppercase letter." << std::endl;
//     }

//     else if (ch >= 'a' && ch <= 'z') {
//         std::cout << ch << " is a lowercase letter." << std::endl;
//     }
//     else {
//         std::cout << ch << " is not a letter." << std::endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 45;
//     cout << ( n >= 0 ? "pos":"neg") << endl;
//     return 0;
// }

//LOOP
//WHILE LOOP
// #include <iostream>
// using namespace std;

// int main() {
//     int count=1;
//     while (count <=5)
//     {
//         cout<<count<<"\n";
//         count++;
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n=20;
//     int count=1;
//     while (count <=n)
//     {
//         cout<<count<<"\n";
//         count++;
//     }
    
//     return 0;
// }


//for loop
// #include <iostream>
// using namespace std;
// int main() {
//     int n=20;
//     for (int i=1; i<=n; i++){
//         cout << i<<" ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n=20;
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout << "sum is ="<<sum <<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n=20;
//     int sum = 0;
//     int i=1;
//     while (i<=n)
//     {
//         sum= sum+i;
//         i++;
//     }
    
//     cout << "sum is ="<<sum <<endl;
//     return 0;
// }



// print odd num
// #include <iostream>
// using namespace std;
// int main() {
//     int n=5;
//     for(int i=1; i<=n; i++){
//         if (i%2 != 0)
//         {
//             cout <<i <<" ";
//         }
        
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n=20;
//     int oddSum = 0;
//     for(int i=1; i<=n ; i++){
//         if (i%2 != 0)
//         {
//             oddSum +=i;
//         }
        
//     }
//     cout << "odd sum is ="<<oddSum <<endl;
//     return 0;
// }

//even
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 20;
//     int evenSum = 0;  // Initialize evenSum to 0
//     for(int i = 1; i <= n; i++) {
//         if (i % 2 == 0) {  // Check if the number is even
//             evenSum += i;  // Add the even number to evenSum
//         }
//     }
//     cout << "Even sum is = " << evenSum << endl;  // Print the sum of even numbers
//     return 0;
// }



// The do-while loop in C++ executes a block of code at least once before checking the condition. Here’s a simple example that prints numbers from 1 to 5 using a do-while loop:


// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     do {
//         cout << i << " ";  // Print the current value of i
//         i++;               // Increment i
//     } while (i <= 5);     // Continue looping while i is less than or equal to 5
//     cout << endl;         // Print a newline at the end
//     return 0;
// }
// //
// The do block executes first, printing the value of i and then incrementing it.
// After executing the block, the while condition is checked. If i is less than or equal to 5, the loop continues.
// This ensures that the loop body executes at least once, even if the condition is false initially (which is not the case here, but it's important for understanding the behavior of do-while).//

//NESTED LOOP
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     for (int i=1; i<=n; i++){
//         int m=10;
//         for (int j=1; j<=m; j++){
//             cout << "*";

//         }
//         cout <<endl;
//     }
//     return 0;
// }

