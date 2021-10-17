//
// Created by florin on 10/15/21.
//

#include "parkingLot.h"
#include <iostream>

//CONSTRUCTORS

parkingLot::parkingLot(int rows, int columns, std::string lotName) : parkingLot(rows, columns) {
    parkingLot::lotName = lotName;
}

parkingLot::parkingLot(int rows, int columns) : parkingLot(columns){
    parkingLot::rows = rows;
}

parkingLot::parkingLot(int columns) : parkingLot(){
    parkingLot::columns = columns;
}

parkingLot::parkingLot() {
    parkingLot::rows = 1;
    parkingLot::columns = 7;
    parkingLot::lotName = "Unnamed Parking Lot";
}

//GETTERS
int parkingLot::getRows() const {
    return rows;
}

int parkingLot::getColumns() const {
    return columns;
}

int parkingLot::getTotalSpace() const {
    return totalSpace;
}

int parkingLot::getAvailableSpace() const {
    return availableSpace;
}

int parkingLot::getClientNumber() const {
    return clientNumber;
}

double parkingLot::getTaxPerHour() const {
    return taxPerHour;
}

double parkingLot::getParkingLotBalance() const {
    return parkingLotBalance;
}

const std::string parkingLot::getLotName() const {
    return lotName;
}

//SETTERS
void parkingLot::setRows(int rows) {
    parkingLot::rows = rows;
}

void parkingLot::setColumns(int columns) {
    parkingLot::columns = columns;
}

void parkingLot::setAvailableSpace(int availableSpace) {
    parkingLot::availableSpace = availableSpace;
}
void parkingLot::setTotalSpace(int totalSpace) {
    parkingLot::totalSpace = totalSpace;
}

void parkingLot::setClientNumber(int clientNumber) {
    parkingLot::clientNumber = clientNumber;
}

void parkingLot::setTaxPerHour(double taxPerHour) {
    parkingLot::taxPerHour = taxPerHour;
}

void parkingLot::setParkingLotBalance(double parkingLotBalance) {
    parkingLot::parkingLotBalance = parkingLotBalance;
}

void parkingLot::payTax(int hours) {
    parkingLot::parkingLotBalance += hours * parkingLot::taxPerHour;
}

//Occupy one parking space
void parkingLot::parkCar(int lot[50][50]) {
    if (availableSpace > 0) {
        --availableSpace;
    }
}

//Command line representation of the parking lot
void parkingLot::showParkingLot() {
    for (int i = 0; i < parkingLot::rows; ++i) {
        for (int j = 0; j < parkingLot::columns; ++j) {
            //show parking lot
            if (parkingLot::lot[i][j] == 0) std::cout << "[ ] ";
            else std::cout << "[x] ";
        }
        std::cout << '\n';
    }
    //show company details
    std::cout << parkingLot::getLotName() << "'s Balance: €" << parkingLot::getParkingLotBalance();
    std::cout << parkingLot::getLotName() << "'s capacity: " << parkingLot::getTotalSpace();
    std::cout << parkingLot::getLotName() << "'s availability: " << parkingLot::getAvailableSpace();
    std::cout << parkingLot::getLotName() << "'s client number: " << parkingLot::getClientNumber();
}