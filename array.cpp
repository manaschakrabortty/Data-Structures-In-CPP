//
//An Array is a collection of items. The items could be integers, strings, DVDs, 
//games, books—anything really. The items are stored in neighboring (contiguous) 
//memory locations. Because they're stored together, checking through the entire 
//collection of items is straightforward.














// #include <iostream>
// using namespace std;
// int main(){
//     int array1[5];//create an enpty or difinayion the array
//     int array1[5] = {99,98,78,76,69}


//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int marks[5] = {99,98,78,76,69};
//     cout <<marks[0] <<endl;
//     cout <<marks[1] <<endl;
//     cout <<marks[2] <<endl;
//     marks[0] =101;
//     cout <<marks[0] <<endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int marks[5] = {99,98,78,76,69};
//     int size = 5;
//     //loops : 0-(size-1)
//     // int sz = sizeof(marks);

//     for (int i=0; i<size; i++){
//         cout<<marks[i] <<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int size = 5;
//     int marks[size];
//     for (int i=0; i<size; i++){
//         cin >>marks[i];
//     }

//     for (int i=0; i<size; i++){
//         cout<<marks[i] <<endl;
//     }
//     return 0;
// }
//LOOPS ON ARRAY 
//FIND SMALLEST LARGEST IN ARRAY

// #include <iostream>
// using namespace std;
// int main(){
//     int nums[] ={5,15,22,1,-16,24};
//     int size = 6;

//     int smallest = INT16_MAX;

//     for (int i=0; i<size; i++){
//         if(nums[i] < smallest){
//             smallest = nums[i];
//         }
//     }
//     cout <<"smallest nums is " << smallest <<endl;
//     return 0;
// }



//min ,max 
// #include <iostream>
// using namespace std;
// int main(){
//     int nums[] ={5,15,22,1,-16,24};
//     int size = 6;
//     int smallest = INT16_MAX;
//     for (int i=0; i<size; i++){
//         smallest = min(nums[i], smallest);
//     }
//     cout <<"smallest nums is " << smallest <<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int nums[] ={5, 15, 22, 1, -16, 24};
//     int size = 6;
//     int smallest = INT16_MAX;
//     int largest = INT16_MIN;
//     for (int i=0; i<size; i++){
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//     }
//     cout <<"smallest  nums is " << smallest <<endl;
//     cout <<"largest  nums is " << largest <<endl;
//     return 0;
// }

//print all array then find

// #include <iostream>
// using namespace std;
// int main(){
//     int nums[] ={5, 15, 22, 1, -16, 24};
//     int size = 6;
//     int smallest = INT16_MAX;
//     int largest = INT16_MIN;
//     for (int i=0; i<size; i++){
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//         cout <<nums[i] <<endl;
//     }
//     cout <<"smallest  nums is " << smallest <<endl;
//     cout <<"largest  nums is " << largest <<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int nums[] = {5, 15, 22, 1, -16, 24};
//     int size = 6;
    
//     // Initialize variables to store the smallest and largest values and their indices
//     int smallest = nums[0], largest = nums[0];
//     int smallestIndex = 0, largestIndex = 0;
    
//     for (int i = 1; i < size; i++) {  // Start from 1 since 0 is already initialized
//         if (nums[i] < smallest) {
//             smallest = nums[i];
//             smallestIndex = i;  // Update index of the smallest value
//         }
//         if (nums[i] > largest) {
//             largest = nums[i];
//             largestIndex = i;  // Update index of the largest value
//         }
//     }
    
//     cout << "Smallest number is " << smallest << " at index " << smallestIndex << endl;
//     cout << "Largest number is " << largest << " at index " << largestIndex << endl;
    
//     return 0;
// }


// //REVERSE AN ARRAY
// #include <iostream>
// using namespace std;
// void revrseArray(int arr[],int size){
//     int start =0, end = size -1;
//     while(start< end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[] = {2,3,5,6,7,8,99,56};
//     int size = 8;
//     revrseArray(arr, size);
//     for( int i =0; i<size;i++){
//         cout<<arr[i] <<" ";
//     }

//     cout <<endl;
//     return 0;
// }
