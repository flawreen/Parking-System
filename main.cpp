#include <iostream>
#include "parkingLot.h"


int main() {
    parkingLot p1(7, 7, "La Gica");
    Client Florin;
    p1.parkCar(Florin, 10);
    std::cout << "dasdsa";
    p1.parkCar(Florin, 9);
    std::cout << Florin.parkingTickets[1];
    p1.leaveParkingLot(Florin, 12);
    p1.leaveParkingLot(Florin, 13);
    p1.leaveParkingLot(Florin, 11);
    p1.showParkingLot();

    return 0;
}
