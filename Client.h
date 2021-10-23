//
// Created by florin on 10/16/21.
//

#ifndef CARRENTALSYSTEM_CLIENT_H
#define CARRENTALSYSTEM_CLIENT_H

#include <string>

class parkingLot;

class Client {
private:
    int clientID, clientRow, clientColumn;
    std::string clientName;
public:
    int parkedCars, parkingTickets[3] = {0};
    //CONSTRUCTORS
    Client(const std::string& name);
    Client();

    //GETTERS
    int getClientId() const;

    int getClientRow() const;

    int getClientColumn() const;

    int getParkedCars() const;



    //SETTERS
    void setClientId(int clientId);

    void setClientRow(int row);

    void setClientColumn(int column);

    void setParkedCars(int parkedCars);

    const std::string &getClientName() const;

    void setClientName(const std::string &clientName);
};


#endif //CARRENTALSYSTEM_CLIENT_H
