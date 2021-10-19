//
// Created by florin on 10/15/21.
//
#include <iostream>
#include "Client.h"
#include "parkingLot.h"



//CONSTRUCTORS

parkingLot::parkingLot(int rows, int columns, std::string lotName) {
    if (rows > 10) parkingLot::rows = 10;
    else if (rows < 1) parkingLot::rows = 1;
    else parkingLot::rows = rows;

    if (columns > 10) parkingLot::columns = 10;
    else if (columns < 1) parkingLot::columns = 1;
    else parkingLot::columns = columns;

    if (lotName.size() < 3) parkingLot::lotName = "Untitled";
    else parkingLot::lotName = lotName;

    parkingLot::totalSpace = parkingLot::rows * parkingLot::columns;
    parkingLot::availableSpace = totalSpace;
    parkingLot::feeCostPerHour = (double) parkingLot::rows * parkingLot::columns / 10;
    parkingLot::clientNumber = 0;
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

double parkingLot::getFeeCostPerHour() const {
    return feeCostPerHour;
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

void parkingLot::setFeeCostPerHour(double taxPerHour) {
    parkingLot::feeCostPerHour = taxPerHour;
}

void parkingLot::setParkingLotBalance(double parkingLotBalance) {
    parkingLot::parkingLotBalance = parkingLotBalance;
}

void parkingLot::payFee(int hours) {
    parkingLot::parkingLotBalance += hours * parkingLot::feeCostPerHour;
}

int parkingLot::findParkingSpot() {
    for (int i = 1; i <= rows; ++i)
        for (int j = 1; j <= columns; ++j)
            if (lot[i][j] == 0) return i * 10 + j;
    return -1;
}

// Occupy one parking space
void parkingLot::parkCar(Client& c, int hours) {
    // Check if there are available spots and update them
    // One customer can not have more than three cars parked at the same time in the same parking lot
    if (availableSpace >= 0 && c.parkedCars < 3) {
        --availableSpace;

        // Check if the client is new and give him an ID
        if (c.parkedCars == 0) { // adauga evidenta pentru clienti dupa nume (<string>) sau dupa id (<int>)
            ++clientNumber;
            c.setClientId(clientNumber);
        }

        // Find a free spot
        int parkingSpot = findParkingSpot();

        // Pay the parking fee
        // Client gets a 50% discount every third park
        if (c.getParkedCars() % 3 == 0 && c.getParkedCars() > 0) {
            std::cout << "Client #" << c.getClientId() << " gets to park for half the price!\n";
            parkingLotBalance += hours * feeCostPerHour / 2;
        }
        else {
            payFee(hours);
        }

        // Give the client his ticket with the parking spot details
        for (int i = 0; i < 3; ++i)
            if (c.parkingTickets[i] == 0)
            {
                c.parkingTickets[i] = parkingSpot;
                std::cout <<c.parkingTickets[i] << '\n';
            }

        // Park the car
        int i = parkingSpot / 10 % 10;
        int j = parkingSpot % 10;
        lot[i][j] = c.getClientId();
        c.setClientRow(i);
        c.setClientColumn(j);
        ++c.parkedCars;
    } else {
        std::cout << "Parking spot is full... Come back later!\n";
        return;
    }
}

// Leave a parking spot
void parkingLot::leaveParkingLot(Client& c, int parkingSpot) {
    int row = parkingSpot / 10 % 10;
    int column = parkingSpot % 10;

    for (int i = 0; i < 3; ++i)
        if (c.parkingTickets[i] == parkingSpot) {
            c.parkingTickets[i] = 0;
            lot[row][column] = 0;

            std::cout << "You left the ";
            switch(column) {
                case 1:
                    std::cout << "first parking spot in the ";
                    break;
                case 2:
                    std::cout << "second parking spot in the ";
                    break;
                case 3:
                    std::cout << "third parking spot in the ";
                    break;
                default:
                    std::cout << column << "th parking spot in the ";
                    break;
            }

            switch(row) {
                case 1:
                    std::cout << "first row.\n";
                    break;
                case 2:
                    std::cout << "second row.\n";
                    break;
                case 3:
                    std::cout << "third row.\n";
                    break;
                default:
                    std::cout << row << "th row.\n";
                    break;
            }
            --c.parkedCars;
            return;
        }
}


//Command line representation of the parking lot
void parkingLot::showParkingLot() {
    std::cout << "\tLegend:\n\t[ ] = empty spot;\n\t[x] = taken spot.\n";
    for (int i = 1; i <= parkingLot::rows; ++i) {
        for (int j = 1; j <= parkingLot::columns; ++j) {
            //show parking lot
            if (parkingLot::lot[i][j] == 0) std::cout << "[ ] ";
            else std::cout << "[x] ";
        }
        std::cout << "\b\n";
    }
    //show company details
    std::cout << parkingLot::getLotName() << "'s Balance: €" << parkingLot::getParkingLotBalance() << '\n';
    std::cout << parkingLot::getLotName() << "'s parking fee per hour: €" << parkingLot::getFeeCostPerHour() << '\n';
    std::cout << parkingLot::getLotName() << "'s capacity: " << parkingLot::getTotalSpace() << '\n';
    std::cout << parkingLot::getLotName() << "'s available spaces: " << parkingLot::getAvailableSpace() << '\n';
    std::cout << parkingLot::getLotName() << "'s client number: " << parkingLot::getClientNumber() << '\n';
}