/*
Name: Dylan DeJesus
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Destructor Example
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
    
    ~Health(){ // Destructor
        cout << "Object is destroyed." << endl;
    }
    void healthReport(){
        cout << "Patient: " << name << ", Age: " << age << ", Weight: " << weight << " lbs" << ", Height: " << height << " cm" << endl;
        
    }
    
    /*
    Reflection:
    
    1.) What I understood: I understood how to call a destructor with the "~". I understand
    that it is used to save memory and prevent code from overflowing the program.
    
    2.) Difficulties: No difficulties. 
    
    3.) Research: I used the slides as a base and screenshots from class. 
    
    4.) No AI used.
    
    5.) What I learned: I learned that destructors are use to save memory. I learned
    that copies don't count when using destructors. 
     
    
    */
};