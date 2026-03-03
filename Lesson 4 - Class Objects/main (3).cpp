// main for Account.h
/*
Name: Dylan DeJesus
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic:Encapsulation 1
Date: 03/2/2026
*/
#include <Account.h>

int main()
{
    Account a1{"Fire123", "24813"};
    
    a1.details();
    a1.updatePassword("123456789");
    a1.details();
}