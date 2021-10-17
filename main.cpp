#include <iostream>
#include "parkingLot.h"
#include "Client.h"


int main() {
    parkingLot parcare1(7, 10, "La Gica");
    Client Florin(1512);
    Florin.park(parcare1, 10);

    parcare1.showParkingLot();
    return 0;
}
