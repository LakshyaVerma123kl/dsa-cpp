#include<iostream>
using namespace std;

int count(int a){
    int digit = 0;
    if(a == 0){
        return 1;
    }
    if(a < 0){
        cout << "The number is negative\n";
        cout << "Converting the number to positive....\n";
        a = -a;
    }
    while(a != 0){
        a = a / 10;
        digit++;
    }
    return digit;
}

int reverse(int a){
    int newn = 0;
    bool isNegative = false;

    if(a < 0){
        isNegative = true;
        a = -a;
    }

    while(a != 0){
        int b = a % 10;
        newn = newn * 10 + b;
        a = a / 10;
    }

    if(isNegative)
        newn = -newn;

    return newn;
}

void checknum(int a, int b){
    if (a == b){
        cout << "\nYes, it is a palindrome";
    } else {
        cout << "\nNo, it is not a palindrome";
    }
}

int main(){
    cout << "Enter the digit: ";
    int a;
    cin >> a;

    cout << "The number of digits are: " << count(a);
    cout << "\nThe reverse of the number is: " << reverse(a);
    checknum(a, reverse(a));

    return 0;
}
