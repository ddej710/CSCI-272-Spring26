#include <Health.h>
/*
Name: Dylan DeJesus
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: main for class, constructors, destructors
Date: 03/02/2026
*/

int main()
{
    // For Simple Class Example File
    Health simpleClass;
    // For Constuctor Class Examples File
    Health constructorClass{"Luke Sanchez", 29, 165, 170};
    Health* p1constructorClass = new Health;
    Health* p2constructorClass = new Health("Arthur Morgan", 36, 180, 185);
    
    simpleClass.healthReport();
    constructorClass.healthReport();
    p1constructorClass -> healthReport();
    p2constructorClass -> healthReport();
    
    
    
}
