//
// Created by florin on 10/16/21.
//

#ifndef CARRENTALSYSTEM_CLIENT_H
#define CARRENTALSYSTEM_CLIENT_H


#include "parkingLot.h"
#include <thread>

class Client {
private:
    int clientID;
public:
    //CONSTRUCTORS
    Client();

    //GETTERS
    int getClientId() const;

    //SETTERS
    void setClientId(int clientId);

    std::thread park(parkingLot &p, int hours);
};


#endif //CARRENTALSYSTEM_CLIENT_H
