/*Employee class which uses the abstract base class User*/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

using namespace std;

class Employee: public User {
    private:
       string userName;
       string password;
       
    public:
        void createAccount(string userName, string password);
    

    

}