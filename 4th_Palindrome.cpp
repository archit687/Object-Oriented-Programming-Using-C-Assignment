#include <iostream>
using namespace std;

int main()
{
    int num,newnum, rev = 0, reminder;
    cout << "Enter a Number\n";
    cin >> num;
    newnum = num;

    while (num != 0)
    {
        reminder = num % 10;
        rev = rev * 10 + reminder;
        num = num / 10;
    }
    
    
    if (newnum == rev)
    {
        cout << "Yes,This Number " << newnum << " is a Palindrome\n";
    }
    else
    {
        cout << "No,This Number " << newnum << " is not a Palindrome\n";
    }

    return 0;
}