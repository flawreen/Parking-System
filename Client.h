//
// Created by florin on 10/16/21.
//

#ifndef CARRENTALSYSTEM_CLIENT_H
#define CARRENTALSYSTEM_CLIENT_H


#include "parkingLot.h"

class Client {
private:
    int clientID;
public:
    //CONSTRUCTORS
    Client();
    Client(int clientID);

    //GETTERS
    int getClientId() const;

    //SETTERS
    void setClientId(int clientId);

    void park(parkingLot &p, int hours);
};


#endif //CARRENTALSYSTEM_CLIENT_H
