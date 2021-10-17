//
// Created by florin on 10/15/21.
//

#include "parkingLot.h"
#include <iostream>

//CONSTRUCTORS

parkingLot::parkingLot(int rows, int columns, std::string lotName) {
    parkingLot::lotName = lotName;
    parkingLot::rows = rows;
    parkingLot::columns = columns;
    parkingLot::totalSpace = rows * columns;
    parkingLot::availableSpace = totalSpace;
    parkingLot::taxPerHour = (double) parkingLot::rows * parkingLot::columns / 10;
    parkingLot::parkingLotBalance = 0;
}

parkingLot::parkingLot(int rows, int columns) : parkingLot(rows, columns, "Untitled") {}

parkingLot::parkingLot(int columns) : parkingLot(1, columns, "Untitled") {}

parkingLot::parkingLot() : parkingLot(1, 7, "Untitled") {}

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
void parkingLot::parkCar() { //add lot for binary search
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
    std::cout << parkingLot::getLotName() << "'s Balance: €" << parkingLot::getParkingLotBalance() << '\n';
    std::cout << parkingLot::getLotName() << "'s tax: €" << parkingLot::getTaxPerHour() << '\n';
    std::cout << parkingLot::getLotName() << "'s capacity: " << parkingLot::getTotalSpace() << '\n';
    std::cout << parkingLot::getLotName() << "'s available spaces: " << parkingLot::getAvailableSpace() << '\n';
    std::cout << parkingLot::getLotName() << "'s client number: " << parkingLot::getClientNumber() << '\n';
}