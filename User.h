// User Interface for Client and Employee class
#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

class User {

    public:
    virtual void createAccount(string userName, string password) =0; //pure virtual function
    virtual void login(string userName, string password)=0; //pure virtual function
    //virtual ~User(){};


}