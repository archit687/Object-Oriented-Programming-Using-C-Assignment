#include<iostream>
using namespace std;

int factorial(int f){
    int fact;
    if(f <= 0){
        cout<<"Error";
    }
    else{
        fact = 1;
        for(int i = 1;i <= f;i++){

            fact = fact * i;

        }
    }

    return fact;

}

int main(){
    int num,c;

    cout<<"Enter a number\n";
    cin>>num;

    c = factorial(num);
    cout<<"The Factorial of "<< num <<" is "<< c << endl;

    return 0;

}
