#include<iostream>
using namespace std;

int main(){
    int rev=0,num,reminder;
    cout<<"Enter a number\n";
    cin>>num;                  // 1234
    while(num != 0){           
    reminder = num % 10;       // 1234 % 10 = 4   123 % 10 = 3     12 % 10 = 2       1 % 10 = 0
    rev = rev * 10 + reminder; // 0 * 10 + 4 = 4  4 * 10 + 3 = 43  43 * 10 + 2 = 432 432 * 10 + 1 = 4321
    num = num / 10;            //1234 / 10 = 123  123 / 10 = 12    12 / 10 = 1       1 / 10 = 0
    }
    cout<<"The Reverse number is "<< rev;

    return 0;


}