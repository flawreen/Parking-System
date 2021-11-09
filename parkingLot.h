//
// Created by florin on 10/15/21.
//

#ifndef CARRENTALSYSTEM_PARKINGLOT_H
#define CARRENTALSYSTEM_PARKINGLOT_H


#include <string>
#include <vector>
#include "Client.h"

class parkingLot {
private:
    int rows, columns, totalSpace, availableSpace, lot[11][11] = {0}, clientNumber;
    double feeCostPerHour, parkingLotBalance;
    std::string lotName;
public:
    parkingLot() = delete;
    parkingLot(const std::string& lotName);
    parkingLot(int columns, const std::string& lotName);
    parkingLot(int rows, int columns, const std::string& lotName);

    //GETTERS
    int getRows() const;

    int getColumns() const;

    int getTotalSpace() const;

    int getAvailableSpace() const;

    int getClientNumber() const;

    double getFeeCostPerHour() const;

    double getParkingLotBalance() const;

    std::string getLotName() const;

    //SETTERS
    void setRows(int rows);

    void setColumns(int columns);

    void setAvailableSpace(int availableSpace);

    void setTotalSpace(int totalSpace);

    void setClientNumber(int clientNumber);

    void setFeeCostPerHour(double taxPerHour);

    void setParkingLotBalance(double parkingLotBalance);


    void payFee(int hours);

    int findParkingSpot();

    bool checkIfUsernameExists(Client& c, const std::string& username);

    void createNewUser(Client& c);

    void parkCar(Client& c, int hours);

    void showClientCars(Client& c);

    void leaveParkingLot(Client& c);

    void showParkingLot();

};


#endif //CARRENTALSYSTEM_PARKINGLOT_H
