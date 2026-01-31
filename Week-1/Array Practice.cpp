
#include <iostream>
using namespace std;


int main() {
 const int houses{5};

 int familymembers[houses]{5, 3, 2, 7, 9};

 for (int i{0}; i < houses; i++){
    int answer{0};
    cout << "How many people live in house " << i + 1 << "?" << endl;
    cin >> answer;
    if (familymembers[i] == answer){
        cout << "Correct!" << endl;
    }
    else{
        cout << "Incorrect." << endl;
    }
 }
}
