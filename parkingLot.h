//
// Created by florin on 10/15/21.
//

#ifndef CARRENTALSYSTEM_PARKINGLOT_H
#define CARRENTALSYSTEM_PARKINGLOT_H


#include <string>

class parkingLot {
private:
    int rows, columns, totalSpace, availableSpace, lot[50][50];
    double taxPerHour, parkingLotBalance;
    std::string lotName;
public:
    static int clientNumber;
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

    double getTaxPerHour() const;

    double getParkingLotBalance() const;

    const std::string getLotName() const;

    //SETTERS
    void setRows(int rows);

    void setColumns(int columns);

    void setAvailableSpace(int availableSpace);

    void setTotalSpace(int totalSpace);

    void setClientNumber(int clientNumber);

    void setTaxPerHour(double taxPerHour);

    void setParkingLotBalance(double parkingLotBalance);


    void payTax(int hours);

    void parkCar();

    void finishTime();

    void showParkingLot();

};


#endif //CARRENTALSYSTEM_PARKINGLOT_H
