#include <iostream>
using namespace std;

int main(){
    int num1{15}, num2{32};
    int *pointer1{&num1}, *pointer2{&num2};

    cout << "The address of num1 is " << pointer1 << endl;
    cout << "The value of num1 is " << *pointer1 << endl;

    cout << endl;

    cout << "The address of num2 is " << pointer2 << endl;
    cout << "The value of num2 is " << *pointer2 << endl;


}