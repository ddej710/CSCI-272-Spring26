/*
Name: Dylan DeJesus
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic:Encapsulation 1
Date: 03/2/2026
*/

#include <iostream>
#include <string>
using namespace std;

class Account{
  private:
  string username;
  string password;
  
  public:
  Account(const string& usname, const string& paswrd){
      username = usname;
      password = paswrd;
  }
  
  bool login(const string& inputUser, const string& inputPassword){
      return (inputUser == username) && (inputPassword == password);
  } 
  
  void details(){
      cout << "Username: " << username << ", Password: " << password << endl; // print info
  }
  void updatePassword(const string& newPassword){
      password = newPassword; // updates password
  }
  
  /*
    Reflection:
    
    1.) What I understood: I understood Encapsulation can be used to update and reorganize
    variables in your classes.
    
    2.) Difficulties: I'm having trouble figuring out why we're using bool for login().
    It's hard for me to type the functions on my own since const string& confuses me a 
    bit. I'm also confused with definitions for Encapsulation.
    
    3.) Research: I used the slides as a base and screenshots from class. 
    
    4.) No AI used.
    
    5.) What I learned:  I learned how to update information using Encapsulation. This makes it
    easier to change information without making code look messy.
     
    
    */
  
};