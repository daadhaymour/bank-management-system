#include "Client.h"

Client::Client(string& userName, string& password, string& firstName, string& lastName,  string& address, string& phoneNumber, int& clientID){
    this -> userName = userName;
    this -> password = password;
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> address = address;
    this ->phoneNumber = phoneNumber;
    this -> clientID = clientID;
}

string Client::getUsername(){
    return this -> userName;
}

void Client::setUsername(string& username){
    this -> userName = username;
}

string Client::getPassword(){
    return this -> password;
}

void Client::setPassword(string& passw){
    this -> password = passw;
}

string Client::getfirstName(){
    return this -> firstName;
}

string Client::getlastName(){
    return this -> lastName;
}

string Client::getAddress(){
    return this -> address;
}
string Client::getPhoneNumber(){
    return this -> phoneNumber;
}
int Client::getClientID(){
    return this -> clientID;
}

/*Class Functions*/

