//
// Created by florin on 10/16/21.
//

#include "Client.h"

#include <utility>


//CONSTRUCTORS
Client::Client(const std::string& name) {
    parkedCars = 0;
    clientID = -1;
    clientName = name;
}

Client::Client() : Client ("NoName") {}

//GETTERS
int Client::getClientId() const {
    return clientID;
}

int Client::getClientRow() const {
    return clientRow;
}

int Client::getClientColumn() const {
    return clientColumn;
}

int Client::getParkedCars() const {
    return parkedCars;
}

const std::string &Client::getClientName() const {
    return clientName;
}

//SETTERS
void Client::setClientId(int clientId) {
    clientID = clientId;
}

void Client::setClientRow(int row) {
    clientRow = row;
}

void Client::setClientColumn(int column) {
    clientColumn = column;
}

void Client::setParkedCars(int parkedCars) {
    Client::parkedCars = parkedCars;
}

void Client::setClientName(const std::string &clientName) {
    Client::clientName = clientName;
}





