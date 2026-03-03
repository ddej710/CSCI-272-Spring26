/*
Name: Dylan DeJesus
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Constructor Examples
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
    Health(){
        // Default Constructor
    }
    
    Health(string n, int a, int w, int h){ // Parameter Constructor
        name = n;
        age = a;
        weight = w;
        height = h;
    }
    
    Health(const Health &other){ // Copy Constructor
        name = other.name;
        age = other.age;
        weight = other.weight;
        height = other.height;
    }
    void healthReport(){
        cout << "Patient: " << name << ", Age: " << age << ", Weight: " << weight << " lbs" << ", Height: " << height << " cm" << endl;
        
    }
    
    /*
    Reflection:
    
    1.) What I understood: I understood how to make a parameter constructor clearly. I understood
    how to output different information using parameter constructors.
    
    2.) Difficulties: I am having trouble knowing the reason why we put a default constructor.
    I can't confidently type out a copy constructor without glancing at the slides.
    
    3.) Research: I used the slides as a base and screenshots from class. 
    
    4.) No AI used.
    
    5.) What I learned: I learned how to output different answers using the parameter constructor. 
    I learned how to make constructors, the name of the class plus '()'. 
     
    
    */
};