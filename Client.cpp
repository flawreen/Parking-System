//
// Created by florin on 10/16/21.
//

#include <thread>
#include "Client.h"
#include "parkingLot.h"

//CONSTRUCTORS

Client::Client() {
    ++parkingLot::clientNumber;
    Client::clientID = clientID;
}

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
std::thread Client::park(parkingLot &p, int hours) {
    p.parkCar();
    p.payTax(hours);
}

