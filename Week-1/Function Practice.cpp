#include <iostream>
using namespace std;

int discountcheck(int age){
    int discount{0};

    if (age < 18 && age >= 14){
        discount = 10;
    }

    else if (age <= 13 && age >= 10){
        discount = 15;
    }

    else if (age <= 9){
        discount = 20;
    }
    else{
        discount = 0;
    }

    return discount;
}

int main()
{
    int discountcheck(int age);

    int age{0};

    cout << "How old is your child?" << endl;
    cin >> age;

    cout << "Your meal is " << discountcheck(age) << " % off!" << endl;
}

