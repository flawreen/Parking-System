#include <iostream>
#include <string>
#include "parkingLot.h"

std::string choice;

void showCommands() {
    std::cout << "createLot = Create a parking lot\n";
    std::cout << "selectLot = Select an already existing parking lot\n";
    std::cout << "createUser = Create user\n";
    std::cout << "selectUser = Select an already existing username\n";
    std::cout << "exit = exit progran\n";
}

void selectLot() {

}

void createLot() {

}

void selectUser() {

}

void createUser() {

}

static void chooseOption() {
    std::cout << "Write action (type 'help' to see the commands):\n";
    std::cin >> choice;
    if (std::equal(choice.begin(), choice.end(), "exit")) return;
    if (std::equal(choice.begin(), choice.end(), "help")) {
        showCommands();
        chooseOption();
    }
    if (std::equal(choice.begin(), choice.end(), "createLot")) {
        createLot();
        chooseOption();
    }
    if (std::equal(choice.begin(), choice.end(), "selectLot")) {
        selectLot();
        chooseOption();
    }

    if (std::equal(choice.begin(), choice.end(), "createUser")) {
        createUser();
        chooseOption();
    }

    if (std::equal(choice.begin(), choice.end(), "selectUser")) {
        selectUser();
        chooseOption();
    }
}



int main() {
    chooseOption();


//    parkingLot p1(7, 7, "La Gica");
//    Client Florin("Florin");
//    Client blade("Marius");
//    Client Gerunziu("Mircea");
//    p1.parkCar(Florin, 10);
//    p1.parkCar(blade, 9);
//    p1.parkCar(Gerunziu, 4);
//    p1.leaveParkingLot(Florin);
//    p1.leaveParkingLot(blade);
//    p1.leaveParkingLot(Gerunziu);
//    p1.parkCar(Florin, 7);
//    p1.showParkingLot();

    return 0;
}
