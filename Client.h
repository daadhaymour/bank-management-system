/*Client class which uses the abstract base class User*/
#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "DebitCard.h"
#include "User.h"

using namespace std;

class Client: public User {
    private:
       string userName, firstName, lastName, address, phoneNumber;
       int clientID;
       string password;
       DebitCard* debitCard;
       
    public:
        /*ctors*/
        Client()=default;
        Client(string& userName, string& password, string& firstName, string& lastName,  string& address, string& phoneNumber, int& clientID);
        /*getters and setters*/
        string getUsername();
        void setUsername(string& username);
        string getPassword();
        void setPassword(string& pass);
        string getfirstName();
        string getlastName();
        string getAddress();
        string getPhoneNumber();
        int getClientID();
        DebitCard& getDebitCard();
        void setDebitCard(int card_num, int cvv, string& expiry_date);

        /*function from abstract base class User*/
        void createAccount(string userName, string password);
        void login(string userName, string password);


    

};