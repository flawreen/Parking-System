//
// Created by florin on 10/16/21.
//

#include "Client.h"
#include "parkingLot.h"

//CONSTRUCTORS

Client::Client(int clientID) {
    Client::clientID = clientID;
    ++parkingLot::clientNumber;
}

Client::Client() : Client(parkingLot::clientNumber) {}


//GETTERS
int Client::getClientId() const {
    return clientID;
}

//SETTERS
void Client::setClientId(int clientId) {
    clientID = clientId;
}

//Pay the parking lot money for the parking space
int parkingLot::clientNumber;
void Client::park(parkingLot &p, int hours) {
    p.payTax(hours);
    p.parkCar();
}

