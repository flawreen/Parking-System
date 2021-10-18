#include <iostream>
#include "parkingLot.h"
#include "Client.h"


int main() {
    parkingLot parcare1(7, 10, "La Gica");
    Client Florin;
    parcare1.showParkingLot();
    Florin.park(parcare1, 10);


    return 0;
}
