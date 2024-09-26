#include <iostream>
using namespace std;
int linear (int arr[],int size,int target){
    for (int i=0; i<size;i++){
        if (arr[i] == target){ //found
            return i;
        }
    }
    return -1;//not found
}
int main(){
    int arr[] = {2,3,5,6,7,8,99,56};
    int size = 8;
    int target = 5;

    cout <<linear(arr,size,target) <<endl;
    return 0;
}


//TIME COMPLEXITY = O(n) // linear
// binaey saerch = O(logn)