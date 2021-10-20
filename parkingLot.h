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
    std::vector<std::string> clientsList;
public:
    parkingLot();
    parkingLot(int columns);
    parkingLot(int rows, int columns);
    parkingLot(int rows, int columns, std::string lotName);

    //GETTERS
    int getRows() const;

    int getColumns() const;

    int getTotalSpace() const;

    int getAvailableSpace() const;

    int getClientNumber() const;

    double getFeeCostPerHour() const;

    double getParkingLotBalance() const;

    const std::string getLotName() const;

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

    void parkCar(Client& c, int hours);

    void leaveParkingLot(Client& c, int whichCar);

    void showParkingLot();

};


#endif //CARRENTALSYSTEM_PARKINGLOT_H
