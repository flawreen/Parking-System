#include <iostream>
#include "parkingLot.h"


int main() {
    parkingLot p1(7, 7, "La Gica");
    Client Florin("Florin");
    Client blade("Marius");
    Client Gerunziu("Mircea");
    p1.parkCar(Florin, 10);
    p1.parkCar(blade, 9);
    p1.parkCar(Gerunziu, 4);
    p1.leaveParkingLot(Florin);
    p1.leaveParkingLot(blade);
    p1.leaveParkingLot(Gerunziu);
    p1.parkCar(Florin, 7);
    p1.showParkingLot();

    return 0;
}
