#ifndef APPLICATION_H
#define APPLICATION_H
#include "Client.h"
#include "DebitCard.h"
#include <map>
#include <iostream>

using namespace std;

class Application{

    private:

    map<int, Client> clients;

    public:
        Application();
        ~Application();
        void createUser();
        void run();

}

#endif

