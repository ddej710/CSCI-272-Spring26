/*
Name: Dylan DeJesus
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Simple Class Example
Date: 03/02/2026
*/

#include <iostream>
#include <string>
using namespace std;

class Health{
    private:
    string name{"Mario Louis"};
    int age{23};
    int weight{150};
    int height{175};
    
    public:
    void healthReport(){
        cout << "Patient: " << name << ", Age: " << age << ", Weight: " << weight << " lbs" << ", Height: " << height << " cm" << endl;
        
    }
    
    /*
    Reflection:
    
    1.) What I understood: I understood how to declare and name a class.
    I understood how to call a function. I am capable of confidentally coding
    something simple like this. I also know how to call a class in main.
    
    2.) Difficulties: I struggle with the vocabulary and don't 100% understand why/when we make
    some things private or public. I just know the function needs to be public so we can access it
    from main. What happens when you don't declare public or private at all? 
    
    3.) Research: I used the slides as a base and screenshots from class. 
    
    4.) No AI used.
    
    5.) What I learned: I learned how to call a class from main. I learned
    you can call iosteam, string, and use namespace std just once in the class file and
    don't have to put it again anywhere else. 
    
    */
};