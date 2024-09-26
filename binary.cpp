// #include <iostream>
// using namespace std;
// int deciMal(int decNum){
//     int ans =0, pow =1;

//     while(decNum> 0){
//         int rem =decNum %2;
//         decNum /= 2;
//         ans += (rem * pow);
//         pow *=10;
//     }
//     return ans; //binary form
// }
// int main(){
//     // int decNum =50;
//     for(int i=1; i<=10; i++){
//         cout<<deciMal(i)<<endl;
//     }
//     // cout << deciMal(decNum) <<endl;
//     return 0;
// }


#include <iostream>
using namespace std;
int deciMal(int decNum){
    int ans =0, pow =1;

    while(decNum> 0){
        int rem =decNum %2;
        decNum /= 2;
        ans += (rem * pow);
        pow *=10;
    }
    return ans; //binary form
}

int binToDecimal(int biNum){
    int ans =0, pow=1;

    while(biNum>0){
        int rem = biNum % 10;
        ans +=rem * pow;
        biNum /=10;
        pow *= 2;
    }
    return ans;
}


int main(){
    cout <<binToDecimal (10011) <<endl;
    // int decNum =50;
    // for(int i=1; i<=10; i++){
    //     cout<<deciMal(i)<<endl;
    // }
    // // cout << deciMal(decNum) <<endl;
    return 0;
}